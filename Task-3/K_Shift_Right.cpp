#include <iostream>

using namespace std;

void rightShift(int A[], int N, int X) {
    
    X %= N; // if X repeats N times the array returns to original
    for (int shift = 0; shift < X; ++shift) {
        int temp = A[N - 1]; //store last element
        for (int i = N - 1; i > 0; --i) {
            A[i] = A[i - 1]; //shift all other
        }
        A[0] = temp; //restore last element in place of the first
    }
}

int main() {
    int N, X;
    cin >> N >> X;

    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    rightShift(A, N, X);

    for (int i = 0; i < N; ++i) {
        cout << A[i];
        if (i < N - 1) {
            cout << " ";
        }
    }

    return 0;
}
