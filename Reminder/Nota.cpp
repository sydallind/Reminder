#include"Nota.h"

cNota::cNota(int h, int d)
{
	zi = h;
	ora_start = d;
}

cNota::~cNota()
{
	zi = 0;
	ora_start = 0;
}

void cNota::setZi(int day)
{
	zi = day;
}

void cNota::setOra(int hour)
{
	ora_start = hour;
}
