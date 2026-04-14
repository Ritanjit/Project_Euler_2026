/*
    Starting at the top of a 2 x 2 grid and only being able to move right and down, there are exactly 6 routes to the bottom right corner.

        Grid Image = [https://projecteuler.net/resources/images/0015.png?1678992052]

    How many such routes are there through a 20 x 20 grid?
*/

#include<iostream>
using namespace std;

// Explanation --> In an 2x2 grid, 4 moves (2 Right and 2 Down) are required to reach bottom right corner, so similary in 20x20 grid, it'll take 40 moves to reach the bottom right corner (20 Right and 20 Down).

// For m x n grid, there are m+n number of moves required to reach bottom right corner.

// For this problem, we will use combinations from Combinatorics. The Binomial Coefficient is = [(n!)/(r! * (n-r)!)] 

int main() {

    int r = 40;  // 40 total moves (20 right + 20 down)
    int d = 20;  // 20 down moves

    // r factorial
    long long rFact = 1;
    for (r = 40; r>0; r--) {
        rFact *= r;
        cout << "\n" << rFact;
    }

    cout << "\n r factorial = " << rFact;

    return 0;
}