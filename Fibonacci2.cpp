#include <iostream>

class FibonacciGenerator {
private:
    int n1, n2;

public:
    FibonacciGenerator() : n1(0), n2(1) {}

    void generateSeries(int numTerms) {
        std::cout << "Fibonacci Series:";
        for (int i = 0; i < numTerms; i++) {
            std::cout << " " << n1;
            int nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
        }
        std::cout << std::endl;
    }
};

int main() {
    int numTerms;
    std::cout << "Enter the number of terms: ";
    std::cin >> numTerms;

    FibonacciGenerator generator;
    generator.generateSeries(numTerms);

    return 0;
}