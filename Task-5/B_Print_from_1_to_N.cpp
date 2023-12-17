#include <iostream>

using namespace std;

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << endl;
    }
}

int main() {
    int N;
    cin >> N;

    printNumbers(N);

    return 0;
}
