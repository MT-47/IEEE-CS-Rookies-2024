#include <iostream>

using namespace std;

void NewArray(int A[], int B[], int N, int C[]) {
    // Copy elements of B to C
    for (int i = 0; i < N; ++i) {
        C[i] = B[i];
    }

    // Copy elements of A to C
    for (int i = 0; i < N; ++i) {
        C[i + N] = A[i];
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];
    int B[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int C[2 * N];
    NewArray(A, B, N, C);

    for (int i = 0; i < 2 * N; ++i) {
        cout << C[i] << " ";
    }

    return 0;
}