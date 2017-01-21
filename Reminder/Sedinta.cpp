#include"Sedinta.h"
#include<string>
#include<iostream>
using namespace std;

cSedinta::cSedinta(int d, int h, float dur, char *sub):cNota(d,h)
{
	durata = dur;
	subiect = new char[strlen(sub)];
	strcpy(subiect, sub);
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
