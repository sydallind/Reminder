#pragma once
#define _CRT_SECURE_NO_WARININGS
#include"Exceptie.h"

class cNota
{
protected:
	int zi;
	int ora_start;
public:
	cNota();
	cNota(int, int);
	~cNota();
	int getZi() { return zi; }
	int getOra() { return ora_start; }
	void setZi(int);
	void setOra(int);
	virtual void display(int d = 1, int h = 0) = 0;
	virtual char getType() = 0;
};