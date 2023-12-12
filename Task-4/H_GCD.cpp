#include <iostream>

using namespace std;

// Function to calculate GCD (Euclidean algorithm)
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long gcdResult = gcd(a, b);
    long long lcmResult = lcm(a, b);

    cout << gcdResult << " " << lcmResult << endl;

    return 0;
}
