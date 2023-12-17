#include <iostream>

using namespace std;

int recursion(int n) {
    if (n == 1) { //case 1: 
        return 1;
    }

    if (n % 2 == 0) {
        return 1 + recursion(n / 2); //case even
    } else {
        return 1 + recursion(3 * n + 1); //case odd
    }
}

int main() {
    int n;
    cin >> n;

    int length = recursion(n);

    cout << length << endl;

    return 0;
}
