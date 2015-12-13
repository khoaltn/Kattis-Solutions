# Written by Dagm Ayalew, The College of Wooster 16' at dzegeye16@wooster.edu

import sys
import math

def isPrime(candidate):
    if candidate<=2:
        return candidate==2
    
    if candidate%2==0:
        return False

    for i in range(3, int(math.sqrt(candidate))+1, 2):
        if (candidate%i==0):
            return False

    return True

# some how finds all the factors of n; and is very fast
def factorize(n):    
    return set(reduce(list.__add__, 
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)))

def primeFactorize(n):
    primes = [x for x in factorize(n) if isPrime(x)]
    
    factors = []
    cursor = 0
    while n>1 and cursor < len(primes):
        while n%primes[cursor]==0:
            factors += [primes[cursor]]
            n /= primes[cursor]
            
        cursor += 1

    
    if n>1:
        if isPrime(n):
            return len(factors) + 1
        
        divider = primes[cursor-1] + 1
        while divider <= n:
            while n%divider==0:
                factors += [divider]
                n /= divider
            print "n: ",n,"; divider: ",divider
            divider += 1
    
    return len(factors)

for line in sys.stdin:
    num = int(line.strip("\n"))
    print primeFactorize(num)
    

        
        
        

    


    
