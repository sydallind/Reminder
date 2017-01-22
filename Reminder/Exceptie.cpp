#define _CRT_SECURE_NO_WARNINGS
#include "Exceptie.h"
#include<string.h>

cExceptie::cExceptie(int nr, char* msg)
{
	id = nr;
	message = new char[strlen(msg) + 1];
	strcpy(message, msg);
}

cExceptie::~cExceptie()
{
	if (NULL != message)
	{
		delete[] message;
		message = NULL;
	}
}
