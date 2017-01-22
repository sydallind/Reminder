#include"Nota.h"

cNota::cNota()
{
	zi = 0;
	ora_start = 0;
}

cNota::cNota(int h, int d)
{
	if (h >= 0 && h <= 23)
	{
		if (d >= 1 && d <= 365)
		{
			zi = d;
			ora_start = h;
		}
		else throw ERR_DATE;
	}
	else
		if (h >= 1 && h <= 365)
		{
			if (d >= 0 && d <= 23)
			{
				zi = h;
				ora_start = d;
			}
			else throw ERR_HOUR;
		}
		else throw ERR_DATE_HOUR;
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
