// The prime factors of 13195 are 5, 7, 13, 29. What is the largest prime factor of the number 600851475143?

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    long long N = 600851475143;
    long long largest_prime = -1;  // initialized with -1 for debugging

    // first, we will continuously divide the only even prime until N is no longer divisible evenly.
    while (N % 2 == 0) {
        largest_prime = 2;
        N /= 2;   // This is remove all the even factors from N and reduce N at the same time.
    }
    
    // second, we will continuously divide the number N with a valid odd factor until it no longer divides the updated N value. separating even and odd reduces the compute time for the below loop.
    for (long long i = 3; i <= sqrt(N); i+=2) {

        while (N % i == 0) {
            largest_prime = i;
            N /= i;
        } 

    }

    // If N > 2, this means N is the largest prime factor, otherwise the largest prime is already stored in largest_prime variable.
    if (N > 2) {
        largest_prime = N;
    }

    cout << "Largest Prime Factor = " << largest_prime << "\n";

    return 0;
}