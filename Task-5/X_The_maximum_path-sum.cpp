#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 10;
const int MAX_M = 10;

long long findMaxPathSum(long long matrix[MAX_N][MAX_M], int n, int m, int i, int j) {
    // reached the bottom-right corner
    if (i == n - 1 && j == m - 1) {
        return matrix[i][j];
    }

    long long downSum = (i + 1 < n) ? findMaxPathSum(matrix, n, m, i + 1, j) : 0;
    long long rightSum = (j + 1 < m) ? findMaxPathSum(matrix, n, m, i, j + 1) : 0;

    // Choose max of two possible paths
    return matrix[i][j] + max(downSum, rightSum);
}

int main() {
    int N, M;
    cin >> N >> M;

    long long matrix[MAX_N][MAX_M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    //inital conditions 0 , 0 indexes
    long long result = findMaxPathSum(matrix, N, M, 0, 0);

    cout << result << endl;

    return 0;
}
//wrong answer in test 3