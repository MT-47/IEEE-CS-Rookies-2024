#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int operations = 0;

    while (true) {
        bool allEven = true;

        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break; 
            }
        }

        if (allEven) {
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
            operations++;
        } else {
            break; // Break the loop if there is an odd number
        }
    }

    cout << operations << endl;

    return 0;
}