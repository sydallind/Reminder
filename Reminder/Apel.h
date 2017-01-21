#pragma once
#include"Nota.h"
class cApel : public cNota
{
private:
	char nrtel[11];
public:
	cApel(int, int, char nr[11]);
	~cApel();
	char* getNr() { return nrtel; }
	void setNr(char nr[11]);
	void display();
};