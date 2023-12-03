#include <iostream>

using namespace std;

int main() {
    string S;
    cin >> S;

    for (char &c : S) {
        if (c == ',') 
        {
            c = ' ';
        } 
        else 
        {
            if (c >= 'A' && c <= 'Z') 
            {
                c += 32;
            } 
            else if (c >= 'a' && c <= 'z') 
            {
                c -= 32;
            }
        }
    }

    cout << S << endl;

    return 0;
}
