#include "include/shout.h"
#include <espeak/speak_lib.h>
#include "../lib/rang/include/rang.hpp"

#include <string.h>
#include <malloc.h>


Shout::Shout()
{


}
Shout::~Shout()
{
}



void Shout::init()
{
}

/*
void Shout::speak(string textStr)
{

}
*/


void Shout::speak(string textStr)
{
  const char *exec_espeak;

  textStr = "espeak \"" + textStr + "\"";
  exec_espeak = textStr.c_str();
  system(exec_espeak);

return;
}


