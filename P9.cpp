/*
A pythagorean triplet is a set of three natural numbers, a < b < c, for which, a² + b² = c².
For example, 3² + 4² = 9 + 16 = 25 = 5²
There exists exactly one pythagorean triplet for which a + b + c = 1000. Find the product abc.
*/ 

#include<iostream>
using namespace std;

int pyTriplet() {

    for (int a=1; a<1000; a++) {
        for (int b=a+1; b<1000; b++) {
            int c = 1000 - a - b;
            if (((a*a) + (b*b) == (c*c))) {
                cout << "\nThe numbers are = | " << a << " | " << b << " | " << c << " |"; 
                return a*b*c;
            }
        }
    }

}

int main() {

    cout << "\nThe product is = " << pyTriplet() << "\n";

    return 0;

}
