#include <iostream>
#include <cmath>

using namespace std;

//distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


bool IsIntersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    //r1 + r2
    double radiusSum = distance(x1, y1, x2, y2) / 2.0 + distance(x3, y3, x4, y4) / 2.0;

    //distance between centers
    double centerDistance = distance((x1 + x2) / 2, (y1 + y2) / 2, (x3 + x4) / 2, (y3 + y4) / 2);

    return centerDistance < radiusSum;
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // Check and print the result
    if (IsIntersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
//Wrong answer on test 3