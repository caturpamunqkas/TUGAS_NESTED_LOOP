#include <iostream>

bool is_palindrome(int n) {
    int reversed = 0;
    int original = n;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int find_nearest_palindrome(int input) {
    int next_palindrome = input + 1;

    while (!is_palindrome(next_palindrome)) {
        next_palindrome++;
    }

    return next_palindrome;
}

int main() {
    int input;

    std::cout << "Input: ";
    std::cin >> input;

    int nearest_palindrome = find_nearest_palindrome(input);

    std::cout << "Output: " << nearest_palindrome << std::endl;

    return 0;
}
