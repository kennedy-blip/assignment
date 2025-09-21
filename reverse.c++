#include <iostream>
using namespace std;

int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    cout << reverseInteger(123) << endl; 
    return 0;
}