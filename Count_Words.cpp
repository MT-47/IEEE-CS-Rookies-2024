#include <iostream>

using namespace std;

int main() {
    string S;
    getline(cin, S);

    int wordCount = 0;
    bool inWord = false;

    for (char c : S) {
        if (isalpha(c)) {
            // If not in word count
            if (!inWord) {
                ++wordCount;
                inWord = true; 
            }
        } else {
            // get out of word 
            inWord = false;
        }
    }

    cout << wordCount << endl;

    return 0;
}
