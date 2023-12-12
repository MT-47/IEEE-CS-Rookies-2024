#include <iostream>

using namespace std;

int main() {
    long long a, b, q;
    cin >> a >> b >> q;

    long long result;
    if (q == 1) {
        result = a;
    } else if (q == 2) {
        result = b;
    } else {
        for (long long i = 3; i <= q; ++i) {
            result = b ^ a; // F(2) ^ F(1) for first time
            a = b; // store F(2) value 
            b = result; // store F(3) value 
        } // for second time result will be F(2) ^ F(3) and so on
    }

    cout << result << endl;

    return 0;
}
//Time limit exceeded on test 4