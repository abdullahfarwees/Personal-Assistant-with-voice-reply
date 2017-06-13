#include "include/zazaAI.h"
#include "include/shout.h"
#include "include/main.h"
#include "../lib/rang/include/rang.hpp"

using namespace std;


zazaAI zaza;
string userInput , AiOuput , resultStr;

void SleepZaza()
{
	cout << "zaza going to sleepzzZZZ " << endl;
	zaza.shout.speak("I'm going to sleep, Bye. ");
}

char *AnalyseResult(string resultStr)
{
	if( resultStr == "txtnotfound")
	{
		cout << rang::bg::red << "Oops! , currently requested service is unavailable!\n";
		cout << "Also I noted down your request. :) \n\n" << rang::bg::reset;
		
		/* todo : store all unavailable request in txt file */
		
		zaza.shout.speak("currently requested service is unavailable!");
		SleepZaza();
		exit(0);
	}

/* shell scripts */
	if( resultStr == "date")return ShDate;
	if( resultStr == "time")return ShTime;
	if( resultStr == "you")return ShWhoIsZaza;
	if( resultStr == "zaza")return ShWakeUpCmd;	
	if( resultStr == "cpu")return ShCpu;
	if( resultStr == "ram")return ShRam;
	if( resultStr == "battery")return ShBattery;
	if( resultStr == "system")return ShSystemStatus;	
	if( resultStr == "fortune")return ShFortune;
	if( resultStr == "bored")return ShOpenYt;			

/* python scripts */
	if( resultStr == "cricket")return PyNewsCric;
	if( resultStr == "news")return PyNewsToday;
	if( resultStr == "quote")return PyQuote;
	

}

void ExecuteCommand(char *cmd)
{

char *ScriptType = "s";

if(strcmp( cmd,ScriptType) == 0)
{
	AiOuput = zaza.ShcommandParser(cmd);
}
else
{
	AiOuput = zaza.PycommandParser(cmd);
}

zaza.shout.speak(AiOuput);

return;
}


int main()
{

AiOuput = zaza.ShcommandParser(ShHelloCmd);
zaza.shout.speak(AiOuput);

/* loop forever starts here */
while(true)
{

cout << "\n :-) ";
getline(cin,userInput);
if(userInput == "stop")
{
	SleepZaza();
	break;
}
else
{
	resultStr = zaza.StringParser(userInput);
	
}

ExecuteCommand(AnalyseResult(resultStr));

}

return 0;
}
