#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        bool isGood = false;

        for (int i = 0; i < S.length() - 2; i++) {
            if (S.substr(i, 3) == "010" || S.substr(i, 3) == "101") {
                isGood = true;
                break;
            }
        }

        cout << (isGood ? "Good" : "Bad") << endl;
    }

    return 0;
}