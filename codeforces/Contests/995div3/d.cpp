    // submitted by Mohit Verma "mohitvdx"
    // problem: 

    #include <bits/stdc++.h>

    #define int long long
    using namespace std;

    const int MOD = 1e9 + 7;
    const int INF = LLONG_MAX >> 1;

    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL); // fast IO

        int t;
        cin >> t;
        while (t--) {
            int n, x, y;

            cin >> n >> x >> y;
            vector < int > a(n);
            int sum = 0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                sum += a[i];
            }

            sort(a.begin(), a.end());

        int count=0;

        for(int i=0; i<n; i++){
            int x1=sum-x-a[i];
            int y1=sum-y-a[i];

            for(int j=y1; j<=x1; j++ ){
            if( binary_search(a.begin() + i + 1,a.end(),j)){
                count++;
            }
            }

        }
        cout<<count<<'\n';
        }
    }// this isnt right

    // 4
    // 7
    // 0
    // 0
    // 1
    // 5
    // 6
