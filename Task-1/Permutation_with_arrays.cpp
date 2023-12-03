#include <iostream>
#include <algorithm>
using namespace std;

bool areEqual(int arr1[], int arr2[], int N)
{

    sort(arr1, arr1 + N);
    sort(arr2, arr2 + N);
 
    for (int i = 0; i < N; i++){
        if (arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int A[N], B[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    if (areEqual(A,B,N)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
