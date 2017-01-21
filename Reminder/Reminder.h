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
	void display();
	void addSedinta();
	void addApel();
	void run();
};