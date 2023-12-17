#include <iostream>

using namespace std;

bool ReachValue(long long current, long long N) {
    // the current value passed N
    if (current > N) {
        return false;
    }
    // 1 can reach N
    else if (current == N) {
        return true;
    }
    // perform two recursion func if one is reached return true
    else {
        return ReachValue(current * 10, N) || ReachValue(current * 20, N);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        // start with 1 and the Value is N
        if (ReachValue(1, N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
