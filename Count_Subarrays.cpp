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

        int countsub = 1; //for the singleton sub-array

        int x = 1;
        for (int i = 1; i < N; i++) {
            if (A[i] >= A[i - 1]) {
                x++;
            } else {
                x = 1;
            }
            countsub += x;
        }

        cout << countsub << endl;
    }

    return 0;
}
