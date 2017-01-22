#pragma once
#include"Nota.h"

class cReminder
{
private:
	cNota *Note[500];
	int nrnote;
public:
	cReminder();
	~cReminder();
	void display(int d=1,int h=0);
	void addSedinta(int d,int h, float dur, char subiect[]);
	void addApel(int d, int h, char nr[11]);
	void run(int,int);
	void Load();
	void Save();
	int getNrNote() { return nrnote; }
	void setNrNote(int nr) { nrnote = nr; }
	void setNote(cNota &add);
	cNota& operator[](int);
	friend cReminder& operator+(const cReminder&, const cReminder&);
};