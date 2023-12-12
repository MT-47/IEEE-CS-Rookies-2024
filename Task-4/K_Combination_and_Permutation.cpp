#include <iostream>

using namespace std;

// Function to calculate factorial
long long factorial(long long n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate Combination (NCR)
long long nCr(long long n, long long r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate Permutation (NPR)
long long nPr(long long n, long long r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << nCr(a, b) << " " << nPr(a, b) << endl;

    return 0;
}
