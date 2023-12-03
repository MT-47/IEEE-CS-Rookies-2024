#include <iostream>
using namespace std;

bool isSubsequence(int A[], int B[], int N, int M) {
    int i = 0, j = 0;

    while (i < N && j < M) {
        if (A[i] == B[j]) {
            j++;
        }
        i++;
    }

    return (j == M);
}

int main() {
    int N, M;
    cin >> N >> M;

    int A[N], B[M];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    if (isSubsequence(A, B, N, M)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
