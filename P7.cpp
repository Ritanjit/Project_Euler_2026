// By listing the first six prime numbers 2, 3, 5, 7, 11 and 13, we can see that the 6th prime is 13. What is the 10001st prime number?

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// function for Sieve of Eratosthenes Method to Find Primes
int findPrime(int num) {
    vector<bool> checkPrime(num + 1, true);  // vector with preset all values as true
    vector<int> primes;
    checkPrime[0] = checkPrime[1] = false;   // setting 0 and 1 as false for prime nos. 
    for (int i=2; i*i<num; i++) {            // set non primes as false
        for (int j=i*i; j<=num; j+=i) {      // setting multiples of first prime 2 as false and so on for next value of i.
            checkPrime[j] = false;
        }
    }
    for (int i=0; i<num; i++) {              // extract all prime numbers
        if (checkPrime[i]) {
            primes.push_back(i);
            // cout << "\n" << i;
        }
    }
    cout << "The 10001st Prime Number is = " << primes[10000];
    return primes[10000];
}

int main() {

    int N = 10001;

    // prime number theory say that nth prime is at approx. = [n*log(n) * 1.3] (1.3 is safety buffer)
    int upperBound = (int)(N * log(N) * 1.3);      // (int) is for type casting

    cout << "\nThe 10001st Prime Number is = " << findPrime(upperBound);

    return 0;
}