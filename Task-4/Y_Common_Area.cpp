#include <iostream>
#include <algorithm>

using namespace std;

struct Rectangle {
    long long x1, y1, x2, y2;
};

// area of a rectangle
long long RectangleArea(Rectangle r) {
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

//the common area shared between all rectangles
long long CommonArea(Rectangle rectangles[], long long n) {
    long long commonArea = 0;

    // Find the common area on the x-axis
    long long minX = rectangles[0].x1, maxX = rectangles[0].x2;
    for (long long i = 1; i < n; ++i) {
        minX = max(minX, rectangles[i].x1); //maxX for all lower left point
        maxX = min(maxX, rectangles[i].x2); //minX for all upper right point
    }

    // Find the common area on the y-axis
    long long minY = rectangles[0].y1, maxY = rectangles[0].y2;
    for (long long i = 1; i < n; ++i) {
        minY = max(minY, rectangles[i].y1); //maxY for all lower left point
        maxY = min(maxY, rectangles[i].y2); //minY for all upper right point
    }

    // Calculate the common area
    if (minX < maxX && minY < maxY) {
        Rectangle commonRect = {minX, minY, maxX, maxY};
        commonArea = RectangleArea(commonRect);
    }

    return commonArea;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        long long n;
        cin >> n;

        Rectangle rectangles[n];
        for (int j = 0; j < n; ++j) {
            cin >> rectangles[j].x1 >> rectangles[j].y1 >> rectangles[j].x2 >> rectangles[j].y2;
        }

        long long commonArea = CommonArea(rectangles, n);

        cout << "Case #" << i  << ": " << commonArea << endl;
    }

    return 0;
}
