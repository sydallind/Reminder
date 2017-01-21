#include<stdio.h>
#include"Reminder.h"

cReminder::cReminder()
{
	Note = NULL;
	nrnote = 0;
}

cReminder::~cReminder()
{
	int i;
	for (i = 0; i < nrnote; i++)
		delete (Note + i);
}

void cReminder::display(int d, int h)
{
	int i;
	for (i = 0; i < nrnote; i++)
	{
		if ((Note + i)->getZi() == d)
			if ((Note + i)->getOra() >= h)
				(Note + i)->display();
	}
}

cNota& cReminder::operator[](int poz)
{
	return *(Note + poz);
}

cReminder operator+(const cReminder &R1, const cReminder &R2)
{
	cReminder aux;
	/*aux.str = new char[strlen(str1.str) + strlen(str2.str) + 2];
	strcpy(aux.str, str1.str);
	strcat(aux.str, str2.str);
	*/
	return aux;
}
