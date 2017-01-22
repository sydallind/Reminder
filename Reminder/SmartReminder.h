#pragma once
#include"Nota.h"

class cSmartReminder
{
	private:
		cNota *Note[500];
		int nrnote;
		int ora_inc,ora_sf;
	public:
		cSmartReminder();
		~cSmartReminder();
		void display(int d = 1, int h = 0);
		void addSedinta(float dur, char subiect[]);

};