#include <iostream>

using namespace std;

const int MAX_N = 500; //searched for this line 

void swapRows(int matrix[MAX_N][MAX_N], int N, int X, int Y) {
    for (int j = 0; j < N; ++j) {
        swap(matrix[X - 1][j], matrix[Y - 1][j]);
    }
}

void swapColumns(int matrix[MAX_N][MAX_N], int N, int X, int Y) {
    for (int i = 0; i < N; ++i) {
        swap(matrix[i][X - 1], matrix[i][Y - 1]);
    }
}

void printMatrix(int matrix[MAX_N][MAX_N], int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j];
            if (j < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int matrix[MAX_N][MAX_N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    swapRows(matrix, N, X, Y);
    swapColumns(matrix, N, X, Y);

    printMatrix(matrix, N);

    return 0;
}
