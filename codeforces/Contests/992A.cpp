// submitted by Mohit Verma "mohitvdx"

// problem:

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> input(n);
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        if (n == 1)
        {
            cout << "YES" << '\n';
            cout << 1 << '\n';
            continue;
        }

        bool flag;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            flag = true;

            int j = 0;
            for (; j < n; j++)
            {

                if (input[i] == input[j])
                {
                    continue;
                }
                else if (abs(input[i] - input[j]) % k == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true && input[i] != input[j - 1])
            {
                cout << "YES" << '\n';
                cout << i + 1 << '\n';
                ans = false;
                break;
            }
            //    cout<< i;
        }
        if (ans)
        {
            cout << "NO" << '\n';
        }
        //  cout<<"NO";
    }
}

// YES
// 2
// NO
// YES
// 3
// NO
// NO
// YES
// 2
// YES
// 1
