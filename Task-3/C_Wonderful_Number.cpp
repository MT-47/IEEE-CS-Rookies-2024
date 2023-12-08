#include <iostream>

using namespace std;

bool isPalindrome(string str) {
    //indexs
    int start = 0; 
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isWonderful(int N) {
    if (N % 2 == 0) {
        return false; // Not odd not wonderful
    }

    //searched for this peace of code 
    string binaryStr = "";
    while (N > 0) {
        char digit = (N % 2) + '0';
        binaryStr = digit + binaryStr;
        N /= 2;
    }
    return isPalindrome(binaryStr);

    //this was my original peace of code 
    /*
    bool isPalindrome(int num) { 
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10; //the last digit
        reversed = reversed * 10 + digit; //reversed sum
        num /= 10; //remove last digit
    }
    return original == reversed;
    }*/
    //please let me know why it didn't accept in your feedback 
}

int main() {
    int N;
    cin >> N;

    if (isWonderful(N)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

