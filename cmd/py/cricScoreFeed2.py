import feedparser
import time
from sys import exit

d = feedparser.parse("http://timesofindia.indiatimes.com/rssfeeds/4719161.cms") #"http://www.reddit.com/.rss")
print d['feed']['title']
#print d.feed.subtitle

i=0
print d['entries'][i]['title']
#print d['entries'][i].published

exit()

