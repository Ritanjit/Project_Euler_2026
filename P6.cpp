/* 
The sum of the squares of the first ten natural numbers is --> 1² + 2² + .... + 10² = 385.
The square of sum of first ten natural numbers is --> (1 + 2 + ... + 10)² = 3025.
Hence, the difference between the sum of first ten natural numbers and the square of the sum is 3025-385=2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<iostream>
using namespace std;

int main() {

    long long sumSq = 0;
    long long sqSum = 0;

    // sum of squares
    for (int i=1; i<=100; i++) {
        sumSq += i*i;
    }

    cout << "\nThe sum of squares is = " << sumSq << "\n";

    // square of sum
    for (int i=1; i<=100; i++) {
        sqSum += i;
    }

    sqSum = sqSum * sqSum;

    cout << "The square os sum is = " << sqSum << "\n";

    // difference
    cout << "\nHence, the difference is = " << (sqSum - sumSq) << "\n";

    return 0;
}