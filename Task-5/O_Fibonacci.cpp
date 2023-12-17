#include <iostream>

using namespace std;

int recursion(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n >= 3) {
        return recursion(n - 1) + recursion(n - 2);
    }
}

int main() {
    int N;
    cin >> N;

    int result = recursion(N);

    cout << result << endl;

    return 0;
}
