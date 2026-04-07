// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. What is the smallest positive number that is evenly divisible by all the numbers from 1 to 20?

#include<iostream>
#include<math.h>
// #include<cmath>
#include<vector>
using namespace std;

int main() {

    // boolean array
    bool isPrime[21];
    vector<int> primes;
    int LCM = 1;

    // ------- Sieve of Eratosthenes Method to Find Primes --------

    // initializing all from index >=2 as true to later keep only primes as true.
    for (int i=0; i<21; i++) {
        if (i>=2) {
            isPrime[i] = true;
            // cout << "\n" << isPrime[i] << " ---> " << i+1;
        } else {
            isPrime[i] = false;
            // cout << "\n" << isPrime[i] << " ---> " << i+1;
        }
    }

    // crossing out non-primes using numbers till root of 20;
    for (int i=2; i<=sqrt(20); i++) {
        for (int j=i*i; j<=20; j+=i) {
            isPrime[j] = false;
        }
    }

    // ------ END --------

    for (int i=0; i<21; i++) {
        if (isPrime[i]) {
            cout << i << " ---> " << isPrime[i] << "\n";
            primes.push_back(i);
        }
    }

    cout << "\nNumber of Primes under 20 is = " << primes.size();

    cout << "\nThe Prime Numbers are = ";
    for (int i=0; i<primes.size(); i++) {
        cout << primes[i] << " | ";
    }

    // ------- calculating the exponents for the primes -----------
    for (int i=0; i<primes.size(); i++) {
        int poweredPrime = 1;
        while (poweredPrime * primes[i] <= 20) {
            poweredPrime *= primes[i];
        }
        LCM *= poweredPrime;
    }

    cout << "\nThe LCM is = " << LCM;

    return 0;
}