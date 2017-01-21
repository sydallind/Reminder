#pragma once
#include"Nota.h"

class cReminder
{
private:
	cNota *Note;
	int nrnote;
public:
	cReminder();
	~cReminder();
	void display(int d,int h);
	void addSedinta();
	void addApel();
	void run();
};