import feedparser
import time
import sys

d = feedparser.parse("http://timesofindia.indiatimes.com/rssfeeds/4719161.cms") #"http://www.reddit.com/.rss")
print d['feed']['title']
#print d.feed.subtitle

i=0
print d['entries'][i]['title']
print d['entries'][i].published
print
readNext = raw_input('read next news(y/n) : ')
print

while True:
	if readNext.lower() == "y" :
		i=i+1
	else:
		break
	print d['entries'][i]['title']
	print d['entries'][i].published
	print
	readNext = raw_input('more news (y/n) ')
	print


print "done"
