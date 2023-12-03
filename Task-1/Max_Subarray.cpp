#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++) {
            int maxNum = A[i];
            for (int j = i; j < N; j++) {
                maxNum = max(maxNum, A[j]);
                cout << maxNum << " ";
            }
        }

        cout << endl;
    }

    return 0;
}