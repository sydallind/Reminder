#pragma once
#include"Nota.h"
#include<stdio.h>
class cNota;
class cApel : public cNota
{
private:
	char nrtel[11];
public:
	cApel();
	cApel(int, int, char nr[11]);
	~cApel();
	char* getNr() { return nrtel; }
	void setNr(char nr[11]);
	void display();
	void save(FILE*);
	void load(FILE*);
	char getType() { return 'a'; }
	float getDur() {return NULL; }
};