#define _CRT_SECURE_NO_WARNINGS
#include"Sedinta.h"
#include<string>
#include<iostream>
using namespace std;

cSedinta::cSedinta()
{
	durata = 0;
	subiect = NULL;
}

cSedinta::cSedinta(int d, int h, float dur, char *sub):cNota(d,h)
{
	durata = dur;
	subiect = new char[strlen(sub)];
	strcpy(subiect, sub);
}

cSedinta::~cSedinta()
{
	if (subiect == NULL)
	{
		delete[] subiect;
		subiect = NULL;
	}
}

void cSedinta::setDurata(float dur)
{
	durata = dur;
}

void cSedinta::setSubject(char * s)
{
	subiect = new char[strlen(s)];
	strcpy(subiect, s);
}

void cSedinta::display()
{
	cout << "Sedinta in ziua " << zi << " la ora " << ora_start << " de durata " << durata << " cu subiectul " << subiect << endl;
}
