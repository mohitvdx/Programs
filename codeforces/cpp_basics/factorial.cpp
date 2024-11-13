#include <stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        long long int factorial = 1;
        for (int i = a; i > 0; i--)
        {
            factorial = factorial * i;
        }
        cout << factorial << endl;
    }
    return 0;
}
