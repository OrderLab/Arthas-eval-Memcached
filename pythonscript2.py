import memcache
import time


memc =  memcache.Client(['127.0.0.1:11211'])

str1 = ""
str2 = ""

a = 1250000
while a < 2500000:
        str1 = "key" + str(a)
        str2 = "value" + str(a)
        memc.set(str1, str2)
        a += 1
