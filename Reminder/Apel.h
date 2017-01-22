#pragma once
#include"Nota.h"
#include<stdio.h>

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
	void run(int, int);
	char getType() { return 'a'; }
};