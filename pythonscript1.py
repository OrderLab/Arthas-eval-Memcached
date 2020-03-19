import memcache
import time


memc =  memcache.Client(['127.0.0.1:11211'])

str1 = ""
str2 = ""

a = 1
while a < 70000:
        str1 = str1 + " key"
        a += 1
memc.get(str1)
