#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include"Reminder.h"
#include"Apel.h"
#include"Sedinta.h"


cReminder::cReminder()
{
	nrnote = 0;
}

cReminder::~cReminder()
{
	int i;
	for (i = 0; i < nrnote; i++)
		delete Note[i];
}

void cReminder::display(int d, int h)
{
	int i;
	for (i = 0; i < nrnote; i++)
	{
		cNota &aux = *Note[i];
		if (aux.getZi() == d)
		{
			if (aux.getOra() >= h)
				aux.display();
		}
		else if (aux.getZi() > d)
			aux.display();
	}
}

void cReminder::addApel(int d, int h, char nr[11])
{
	if (nrnote == 0)
	{
		Note[nrnote++] = new cApel(d,h,nr);
	}
	else
	{
		for (int i = 0; i < nrnote; i++)
		{
			if(Note[i]->getType()=='a')
				if (d == Note[i]->getZi() && h == Note[i]->getOra() && strcmp(Note[i]->getNr(), nr) == 0)
					throw ERR_CALL;
		}
		Note[nrnote++] = new cApel(d, h, nr);
	}
}

void cReminder::addSedinta(int d, int h, float dur, char subiect[])
{
	if (nrnote == 0)
	{
		Note[nrnote++] = new cSedinta(d, h, dur,subiect);
	}
	else
	{
		for (int i = 0; i < nrnote; i++)
		{
			if (Note[i]->getType() == 's')
				if (d == Note[i]->getZi())
					if(Note[i]->getOra()>=h && Note[i]->getOra()+Note[i]->getDur()<h)
					throw ERR_MEETING;
		}
		Note[nrnote++] = new cSedinta(d, h, dur, subiect);
	}
}

void cReminder::run(int d,int h)
{
	for (int i = 0; i < nrnote; i++)
	{
		cNota &aux = *Note[i];
		if (aux.getZi() == d)
		{
			if (aux.getOra() >= h && aux.getZi() <= h + 1)
				aux.display();
		}
	}
}

void cReminder::Load()
{
	FILE *load = fopen("load.txt", "r");
	char aux[1024];
	int nrs;
	char* p;
	bool type;
	int d, h;
	float dur;
	char *text;
	while (!feof(load))
	{
		fgets(aux, 1024, load);
		nrs = 0;
		for (int i = 0; i < strlen(aux); i++)
		{
			if (aux[i] == ' ') nrs++;
		}
		if (nrs == 2)
		{
			type = 1;
		}
		else type = 0;
		if (type == 1)
		{
			p = strtok(aux, " \n");
			d = atoi(p);
			while (p != NULL)
			{
				p = strtok(NULL, " \n");
				if (p == NULL) break;
				if (p[0] != '0')
					h = atoi(p);
				else
				{
					text = _strdup(p);
				}
			}
			addApel(d, h, text);
		}
		else
		{
			p = strtok(aux, " \n");
			d = atoi(p);
			int s = 1;
			while (p != NULL)
			{
				p = strtok(NULL, " \n");
				if (s == 1)
				{
					h = atoi(p);
					s++;
				}
				else
					if (s == 2)
					{
						dur = atof(p);
						s++;
						p = strtok(NULL, "\n");
						text = _strdup(p);
						break;
					}
			}
			addSedinta(d, h, dur, text);
		}
	}
}

void cReminder::Save()
{
	FILE *save = fopen("save.txt", "w");
	for (int i = 0; i < nrnote; i++)
	{
		cNota& aux = *Note[i];
		aux.save(save);
	}
}

void cReminder::setNote(cNota & add)
{
	*Note[nrnote++] = add;
}

cNota& cReminder::operator[](int poz)
{
	return *Note[poz];
}

cReminder& operator+(const cReminder &R1,const cReminder &R2)
{
	cReminder aux;
	int i, j;
	aux.nrnote = 0;
	for (i = 0; i < R1.nrnote; i++)
	{
		aux.Note[aux.nrnote] = R1.Note[i];
		aux.nrnote++;
	}
	for (i = 0; i < R2.nrnote; i++)
	{
		aux.Note[aux.nrnote] = R2.Note[i];
		aux.nrnote++;
	}
	return aux;
}
