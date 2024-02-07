#include <iostream>
#include <vector>

std::vector<int> generateFibonacciNumbers(int n) {
    std::vector<int> fibNumbers;

    int a = 0, b = 1;

    for (int i = 0; i < n; ++i) {
        fibNumbers.push_back(a);
        int next = a + b;
        a = b;
        b = next;
    }

    return fibNumbers;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::vector<int> fibonacciNumbers = generateFibonacciNumbers(n);

    std::cout << "First " << n << " Fibonacci numbers: ";
    for (int num : fibonacciNumbers) {
        std::cout << num << " ";
    }

    return 0;
}
