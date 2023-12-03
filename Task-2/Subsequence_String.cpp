#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    string target = "hello";
    int targetIndex = 0;

    for (char c : S) {
        if (c == target[targetIndex]) { //check for every char in hello
            targetIndex++; //go to next char if found
        }

        if (targetIndex == target.size()) { //check if all char found
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
