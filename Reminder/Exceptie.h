#pragma once
#include "Errors.h"

class cExceptie
{
private:
	int id;
	char *message;
public:
	cExceptie(int, char*);
	~cExceptie();
	int getId() { return id; }
	char* getMessage() { return message; }
	void printErrMessage();
};