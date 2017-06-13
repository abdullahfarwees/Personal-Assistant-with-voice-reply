#include <fstream>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "include/zazaAI.h"
#include "include/shout.h"
#include "../lib/rang/include/rang.hpp"

zazaAI::zazaAI()
{

}

zazaAI::~zazaAI()
{

}

void zazaAI::commandDisplay(string display)
{
	cout << rang::fg::yellow << display << rang::fg::reset;
	return;
}

string zazaAI::StringParser(string userInput)
{
string retStr;

	// news
	if(userInput.find("news") != string::npos)
	{
	retStr = "news";
	}
	
	else if(userInput.find("quote") != string::npos)
	{
	retStr = "quote";
	}	
	
	else if(userInput.find("motivation") != string::npos)
	{
	retStr = "quote";
	}
	
	else if(userInput.find("system") != string::npos)
	{
	retStr = "system";
	}				

	// cricket
	else if(userInput.find("cricket") != string::npos)
	{
	retStr = "cricket";
	}

	// date or time
	else if(userInput.find("date") != string::npos)
	{
	retStr = "date";
	}

	else if(userInput.find("time") != string::npos)
	{
	retStr = "time";
	}
	
	else if(userInput.find("you") != string::npos)
	{
	retStr = "you";
	}
	
	else if(userInput.find("cpu") != string::npos)
	{
	retStr = "cpu";
	}	
	
	else if(userInput.find("ram") != string::npos)
	{
	retStr = "ram";
	}	
	
	else if(userInput.find("fortune") != string::npos)
	{
	retStr = "fortune";
	}	
	
	else if(userInput.find("bored") != string::npos)
	{
	retStr = "bored";
	}	
	
	else if(userInput.find("battery") != string::npos)
	{
	retStr = "battery";
	}	
	
	else if(userInput.find("zaza") != string::npos)
	{
	retStr = "zaza";
	}
	
	else if(userInput.find("youtube") != string::npos)
	{
	retStr = "bored";
	}								

	else
	{
	retStr = "txtnotfound";
	}


return retStr;
}

string zazaAI::PycommandParser(char *PyCmd)
{
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(PyCmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    
	commandDisplay(result);    
    return result;
}

string zazaAI::ShcommandParser(char *strCmd)
{

	FILE *fp;
	char charOut[512];

	fp = popen(strCmd, "r");
	if(fp == NULL)
	{
		cout << "No cmd found!";
		return NULL;
	}

	while(fgets(charOut, sizeof(charOut)-1, fp) != NULL)
	{
	}

	string retStr(charOut);
	commandDisplay(retStr);

return retStr;
}

