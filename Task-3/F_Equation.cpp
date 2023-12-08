#include <iostream>

using namespace std;

long long calculateEquation(int X, int N) {
   long long result = 0;

   for(int i = 0; i <= N; i += 2) //number of terms
   {
       long long Xrepeat = 1; //insial value for each term
       for(int j = 0; j < i; j++) 
       {
           Xrepeat *= X;
       }
       result += Xrepeat;
   }
   return result-1; //result - the first term (X0 - 1)
}

int main() {
    int X, N;
    cin >> X >> N;

    long long result = calculateEquation(X, N);
    cout << result << endl;

    return 0;
}
