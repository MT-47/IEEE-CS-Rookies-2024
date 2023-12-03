#include <iostream>
#include <string>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string S;
    cin >> S;

    for (char &c : S) {
        int pos;
        if (Q == 1) // Encryption
        {
            pos = original.find(c);
            if (pos != string::npos) { //if found
                c = key[pos];
            }
        } 
        else // Decryption
        {
            pos = key.find(c);
            if (pos != string::npos) { 
                c = original[pos];
            }
        }
    }

    cout << S << endl;

    return 0;
}
