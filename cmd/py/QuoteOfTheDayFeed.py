import feedparser
import time
import sys

d = feedparser.parse("http://feeds.feedburner.com/brainyquote/QUOTEFU") #"http://www.reddit.com/.rss")
print 
print d['feed']['title']

print
print d['entries'][0]['description']
print


