// The sum of primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all prime numbers below 2 million.

#include<iostream>
#include<vector>
using namespace std;

// sieve of eratosthenes
long long primeSum(long long num) {

    vector<bool> primes(num+1, true);
    long long sum = 0;

    primes[0] = primes[1] = false;

    for (long long i=2; i*i<=num; i++) {
        for (long long j=i*i; j<num; j+=i) {
            primes[j] = false;
        }
    }

    for (long long i=2; i<num; i++) {
        if (primes[i]) {
            sum += i;
        }
    }

    return sum;
}

int main() {

    cout << "\nThe sum of primes under 2 million = " << primeSum(2000000) << "\n";

    return 0;
}