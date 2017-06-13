#ifndef ZAZAAI_H
#define ZAZAAI_H

#include <bits/stdc++.h>
#include "shout.h"

using namespace std;

class zazaAI
{
 public :

	zazaAI();
	~zazaAI();

	Shout shout;

	string StringParser(string userInput);
	string ShcommandParser(char *strCmd);
	string PycommandParser(char *PyCmd);

	void commandDisplay(string display);

};


#endif
