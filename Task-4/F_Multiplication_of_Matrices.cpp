#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    // Input matrix A
    int RA, CA;
    cin >> RA >> CA;
    int A[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CA; ++j) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    int RB, CB;
    cin >> RB >> CB;
    int B[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < RB; ++i) {
        for (int j = 0; j < CB; ++j) {
            cin >> B[i][j];
        }
    }

    // Perform matrix multiplication
    int result[MAX_SIZE][MAX_SIZE];
    //multiply Row * Column
    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CB; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < CA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    for (int i = 0; i < RA; ++i) {
        for (int j = 0; j < CB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
