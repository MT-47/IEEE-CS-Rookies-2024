#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    if (t == 1) { //convert from base to decimal
        string n;
        int x;
        cin >> n >> x;

        int result = 0;
        int power = 0;

        for (int i = n.size() - 1; i >= 0; --i) {
            // casting from string to int
            int digit = (isdigit(n[i])) ? n[i] - '0' : n[i] - 'A' + 10;
            //digit * weight 
            result += digit * pow(x, power);
            power++;
        }

        cout << result << endl;

    } else if (t == 2) { //convert from decimal to base
        int n, x;
        cin >> n >> x;

        string result = "";

        //not finished yet cuz I didn't know how 

        cout << result << endl;
    }

    return 0;
}
