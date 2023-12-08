#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int num) { 
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10; //the last digit
        reversed = reversed * 10 + digit; //reversed sum
        num /= 10; //remove last digit
    }
    return original == reversed;
}


int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int maxNum = 0;
    int minNum = 101;
    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisorCount = 0;
    int maxDivisorNum = 0;

    for (int i = 0; i < N; ++i) {

        maxNum = max(maxNum, A[i]);
        minNum = min(minNum, A[i]);

        if (isPrime(A[i])) {
            primeCount++;
        }

        if (isPalindrome(A[i])) {
            palindromeCount++;
        }

        int divisorCount = countDivisors(A[i]);
        if (divisorCount > maxDivisorCount) {
            maxDivisorCount = divisorCount;
            maxDivisorNum = A[i];
        }
        else if(divisorCount == maxDivisorCount) {
            maxDivisorNum = max(maxDivisorNum, A[i]);
        }

    }

    cout << "The maximum number : " << maxNum << endl;
    cout << "The minimum number : " << minNum << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorNum << endl;

    return 0;
}
