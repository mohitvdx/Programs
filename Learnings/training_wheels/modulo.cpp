//
// Created by Mohit verma on 13/11/24.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b)
{
    if (b == 1)
    {
        return 0;
    }

    int half_power = power(a, b / 2);
    if (b % 2 == 0)
    {
        return half_power * half_power % MOD;
    }
    else
    {
        return half_power * half_power % MOD * (a % MOD) % MOD;
    }
}

signed main()
{

    cout << power(346, 2); // changes 60 operations to 6 operations
    // vs
    //  cout<<pow(2,60);
}
