#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    cin>>N;
    vector<long long int> A(N);
    for (int i = 0; i < N; i++)
    {
        // cout << "Enter a number: ";  //should exactly match the input and output format given in the question 
        cin >> A[i];
    }
    int i = 0;
    int j = N-1;
    while (i < j)
    {
        if (A[i] != A[j])
        {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES";
    return 0;
}
