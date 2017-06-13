#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <espeak/speak_lib.h>

/* command path */
char *ShHelloCmd  = "sh ../cmd/sh/hello.sh";
char *ShWakeUpCmd = "sh ../cmd/sh/wakeup.sh";
char *ShDate	  = "sh ../cmd/sh/date.sh";
char *ShWhoIsZaza = "sh ../cmd/sh/WhoIsZaza.sh";
char *ShTime	  = "sh ../cmd/sh/time.sh";
char *ShBattery	  = "sh ../cmd/sh/batteryStatus.sh";
char *ShCpu		  = "sh ../cmd/sh/cpuUsage.sh";
char *ShFortune	  = "sh ../cmd/sh/ExecFortune.sh";
char *ShOpenYt	  = "sh ../cmd/sh/OpenYt.sh";
char *ShRam	  	  = "sh ../cmd/sh/ramUsage.sh";
char *ShSystemStatus = "sh ../cmd/sh/systemStatus.sh";

char *PyNewsToday = "python ../cmd/py/newsFeed2.py";
char *PyNewsCric  = "python ../cmd/py/cricScoreFeed2.py";
char *PyQuote 	  = "python ../cmd/py/QuoteOfTheDayFeed.py";

#endif
