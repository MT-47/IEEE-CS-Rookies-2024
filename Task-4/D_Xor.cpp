#include <iostream>

using namespace std;

int main() {
    long long a, b, q;
    cin >> a >> b >> q;

    long long result;
    if (q % 3 == 0) {
        result = a ^ b;
    } else if (q % 3 == 1) {
        result = a;
    } else {
        result = b;
    }

    cout << result << endl;

    return 0;
}