#include<stdio.h>
#include"Reminder.h"

cReminder::cReminder()
{
	Note = NULL;
	nrnote = 0;
}

cReminder::~cReminder()
{
	int i;
	for (i = 0; i < nrnote; i++)
		delete (Note + i);
}

void cReminder::display(int d, int h)
{
	int i;
	for (i = 0; i < nrnote; i++)
	{
		(Note + i)->display(d,h);
	}
}
