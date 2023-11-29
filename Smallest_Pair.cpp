#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int minSum = 0;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int currentSum = A[i] + A[j] + j - i;
                if (i == 0 && j == 1)
                {
                    minSum = currentSum;
                }
                else
                {
                    minSum = min(minSum, currentSum);
                }
            }
        }

        cout << minSum << endl;
    }

    return 0;
}