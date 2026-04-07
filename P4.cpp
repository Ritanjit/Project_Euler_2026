// palindrome number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99. Find the largest palindrome made from the product of 3-digit numbers.

#include<iostream>
using namespace std;

// function to check palindrome
bool checkPalindrome(int n) {
    int r = 0, temp = n;
    // to reverse the number
    while (temp > 0) {
        int rem = temp % 10;      // one's place digit.
        r = ((r * 10) + rem);     // multiplying 10 to make one's place digit 10's place which then becomes 100's place in next iteration.
        temp /= 10;               // updating number to remove the added digit.
    }
    // to check if palindrome
    if (n == r) return true; else return false;
}

int main() {

    int largest_pal = 0;
    int a = 0, b = 0;

    // we loop downwards to increase speed
    for (int i=999; i>=100; i--) {
        for (int j=999; j>=100; j--) {
            int prod = i * j;
            if (prod < largest_pal) {break;}
            if (checkPalindrome(prod) && largest_pal<prod) {
                a = i;
                b = j;
                largest_pal = prod;
            }
        }
    }

    cout << "The largest palindrome made of product of two 3-digit numbers is = " << largest_pal << "\n";
    cout << "The numbers which make this are = " << a << " and " << b;

    return 0;

}