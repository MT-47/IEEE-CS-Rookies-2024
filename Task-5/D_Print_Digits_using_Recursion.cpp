#include <iostream>

using namespace std;

void printDigits(int n) {
    
    if (n == 0) { // no digits then go to cout 
        return;
    }

    printDigits(n / 10); //remove all the last digits
    cout << n % 10 << " "; //print last digit 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N == 0) { 
            cout << N;
        }
        printDigits(N);
        cout << endl;
    }

    return 0;
}
