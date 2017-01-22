#define _CRT_SECURE_NO_WARNINGS
#include"Apel.h"
#include<iostream>
#include<string>

using namespace std;

cApel::cApel()
{
}

cApel::cApel(int d, int h, char nr[11]) : cNota(d, h)
{
	strcpy(nrtel, nr);
}

cApel::~cApel()
{
}

void cApel::setNr(char nr[11])
{
	strcpy(nrtel, nr);
}

void cApel::display()
{
	cout << "Apel in ziua " << zi << " la ora " << ora_start << " pe numarul de telefon " << nrtel << endl;
}

void cApel::run(int d, int h)
{
	if (d == zi)
		if (ora_start >= h && ora_start <= h + 1)
			display();
}
