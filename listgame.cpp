//
//  listgame.cpp
//
//  A short algorithm to find the prime factorization of a positive integer
//  and output how many factors there are.
//
//  Created by Khoa Le Tue Nguyen on 12/10/15.
//

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

// Check if an integer is prime or not
bool isPrime(long curr);

// Factorize and return number of prime factors
vector<int> factorize(long input);
int countPrimeFactors(long n);

// Main
int main(int argc, const char * argv[]) {
    long input;
	cin >> input;

	int numFactors = countPrimeFactors(input);
	cout << numFactors << endl;
}

// Factorize & return vector<int> of prime factors
vector<int> factorize(long n) {
	vector<int> factors;
    double limit = sqrt(n) + 1;
	
	for (int i = 2; i < limit; i++) {
		if (n % i == 0 && isPrime(i)) {
			factors.push_back(i);
		}
	}

	return factors;
}

// Count how many times each prime factor appears in the number and return the total
int countPrimeFactors(long n) {
	vector<int> factors = factorize(n);
	int numFactors = 0;
	
	for (int i = 0; i < factors.size(); i++) {
		while (n > 1 && n % factors[i] == 0) {
			numFactors++;
			n = n / factors[i];
		}
	}

	if (n > 1) {
		if (isPrime(n)) {
			return numFactors + 1;
		}

		for (int i = (int) n / 2 + 1; i > 1 && n > 1; i--) {
			while (n > 1) {
				if (n % i == 0 && isPrime(i)) {
					n = n / i;
					numFactors++;
				}
			}
		}
	}

	return numFactors;
}

//
// Check if an integer is prime or not
//
bool isPrime(long curr) {
	if (curr < 2) {
		return false;
	}
	else if (curr == 2) {
		return true;
	}
	else if (curr % 2 == 0) {
		return false;
	}
	else for (int i = 3; i < sqrt(curr) + 1; i += 2) {
			if (curr % i == 0) {
				return false;
			}
		}

	return true;
}
