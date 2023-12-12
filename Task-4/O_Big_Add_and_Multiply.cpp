#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    string sum = to_string(stoll(n) + 9999);
    string product = to_string(stoll(n) * 9999);

    cout << sum << endl;
    cout << product << endl;

    return 0;
    /*

    long long n;
    cin >> n;

    long long sum = n + 9999;
    long long product = n * 9999;

    */
}
//Runtime error on test 3
//searched and found the solution but didn't understand it