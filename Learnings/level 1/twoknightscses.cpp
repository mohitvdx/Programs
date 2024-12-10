// submitted by Mohit Verma "mohitvdx"

// problem: https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>

#define int long long
using namespace std;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // fast IO

    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int ans = (i * i * i * i - 9 * i * i + 24 * i - 16) / 2;
        cout << ans << '\n';
    }
    // }
}
// BETTER/FORMATTED explanation: https://chatgpt.com/share/675869df-663c-800d-b2c6-4639ac6538e1

// so how did we reach such a neat formula???
// 1. we find out the number of ways the knights cannot be placed 
//     we think the positions of knights when they kill each other as a 2x3 and a 3x2 rectangle.
//     so the positions allowed for such a rectangle to exist is limited to position of a corner
//     i.e it can only have n-1 row choices and n-2 column choices for 2x3 rectangle and 
//                         n-2                   n-1                   3x2 rectangle 

// now there are two ways to place in a rectangle so double 
                // [_,_,y]                             [x,_,_]
                // [x,_,_]             and             [_,_,y]

// ie.. number of ways the knights kill each other is 2*2*(n-1)*(n-2)

// 2. now the total number of ways they can be put is n^2 choices for first and n^2-1 choices for second and divide by two because the order doesn't matter

// ie... total number of ways two knight placed  = n^2(n^2-1) / 2

// 3. so the number of ways they are placed so they dont kill each other is

//             expression 2  - expression 1

//             ie... n^2(n^2-1) / 2  - 2*2*(n-1)*(n-2)  

//             and this is the answer.
//             where n is the nxn matrix.