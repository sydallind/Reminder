#include"Nota.h"

cNota::cNota(int h, int d)
{
	zi = h;
	ora_start = d;
}

void cNota::setZi(int day)
{
	zi = day;
}

void cNota::setOra(int hour)
{
	ora_start = hour;
}
