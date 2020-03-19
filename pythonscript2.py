import memcache
import time
import string
import random

memc =  memcache.Client(['127.0.0.1:11211'])

str1 = ""
first = ""
second = ""

a = 10000
while a < 2500000:
	first = random.choice(string.ascii_letters)
	second = random.choice(string.ascii_letters)
        str1 = "" + str(first) + str(second)
	print(str1)
        memc.get(str1)
        a += 1
	print(a)
