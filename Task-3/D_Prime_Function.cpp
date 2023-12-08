#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 is not a prime number
    }

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i) {
        if (n % i == 0) {
            return false; // Found a factor other than 1 & N 
        }
    }

    return true; 
}

int main() {
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (isPrime(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}