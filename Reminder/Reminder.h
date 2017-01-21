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
	void Load();
	void Save();
	cNota& operator[](int);
	friend cReminder operator+(const cReminder&, const cReminder&);
};