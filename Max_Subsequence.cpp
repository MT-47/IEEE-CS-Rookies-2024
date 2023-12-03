#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int sub = 1; //initial value

    for (int i = 1; i < N; ++i) {
        if (S[i] != S[i - 1]) { //if same char dont count
            sub += 1;
        }
    }

    cout << sub << endl;

    return 0;
}
