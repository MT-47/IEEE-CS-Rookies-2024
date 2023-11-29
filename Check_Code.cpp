#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    if (S.length() == A + B + 1 && S[A] == '-') {
        for (int i = 0; i < S.length(); i++) {
            if (i != A && !isdigit(S[i])) //check for digits and skip the "-" 
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}