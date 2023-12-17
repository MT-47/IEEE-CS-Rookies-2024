#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

double Average(int arr[], int n, int Index = 0, double sum = 0) {
    if (Index == n) { //when sum all the elements index equal size
        return sum / n;
    }
    //add elements to sum and move to next index
    return Average(arr, n, Index + 1, sum + arr[Index]); 
}

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    double average = Average(arr, N);

    cout << fixed << setprecision(6) << average << endl; // searched for precision syntax

    return 0;
}
