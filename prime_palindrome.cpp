#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;

}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;

}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    return isPrime(n) && isPalindrome(n);
   
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}
