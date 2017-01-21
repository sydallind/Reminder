#define _CRT_SECURE_NO_WARNINGS
#include"Apel.h"
#include<iostream>
#include<string>

using namespace std;

cApel::cApel(int d, int h, char nr[11]) : cNota(d, h)
{
	strcpy(nrtel, nr);
}

void cApel::setNr(char nr[11])
{
	strcpy(nrtel, nr);
}

void cApel::display()
{
	cout << "Apel in ziua " << zi << " la ora " << ora_start << " pe numarul de telefon " << nrtel << endl;
}
