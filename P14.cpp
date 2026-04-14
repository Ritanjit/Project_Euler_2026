/*
    The following iterative sequence is defined for the set of positive integers:
        n --> n/2      (n is even)
        n --> 3n + 1   (n is odd )

    Using the rule above and starting with 13, we generate the following sequence:
        13 --> 40 --> 20 --> 10 --> 5 --> 16 --> 8 --> 4 --> 2 --> 1

    It can be seen that this sequence (starting at 13 and ending at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

    Which starting number under one million, produces the longest chain?

    NOTE: Once the chain starts, the terms are allowed to go above one million.
*/

#include<iostream>
using namespace std;

int main() {

    long long maxChain = 0;    // to track number of sequence
    long long maxChainNo = 0;

    for (int i = 999999; i > 1; i--) {

        long long currChain = 0;
        long long currChainNo = i;
        long long j = i;

        while (j != 1) {
            if (j % 2 == 0) {j = j / 2;}
            else if (j % 2 !=0) {j = 3*j + 1;}
            currChain++;
        }

        if (currChain > maxChain) {maxChain = currChain; maxChainNo = currChainNo;}

    }

    cout << "\nLargest Chain Number = " << maxChainNo;
    cout << "\nLargest Chain Count = " << maxChain << "\n";

    return 0;
}