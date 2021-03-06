#pragma once
#include"Nota.h"
#include<stdio.h>

class cNota;
class cSedinta : public cNota
{
private:
	float durata;
	char *subiect;
public:
	cSedinta();
	cSedinta(int, int, float, char*);
	~cSedinta();
	float getDurata() { return durata; }
	char* getSubject() { return subiect; }
	void setDurata(float);
	void setSubject(char* s);
	void display();
	void save(FILE*);
	void load(FILE*);
	char getType() { return 's'; }
	char*getNr() { return NULL; }
	float getDur() { return durata; }
};