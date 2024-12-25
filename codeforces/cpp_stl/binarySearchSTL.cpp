#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >>n>> q;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());

    while (q--) {
        string query;
        cin >> query;

        if (query == "binary_search") {
            int x;
            cin >> x;
        bool bs = binary_search(vec.begin(), vec.end(),x);
        if(bs){
            cout<<"found"<<'\n';
        }else{
            cout<<"not found"<<'\n';
        }
        } else if (query == "lower_bound") {
             int x;
            cin >> x;
            auto pos = lower_bound(vec.begin(), vec.end(), x);
            if(pos == vec.end()){
                cout<<-1<<'\n';
            }else{
                 cout<<*pos<<'\n';
            }

        } else if (query == "upper_bound") {
             int x;
            cin >> x;
 auto pos = upper_bound(vec.begin(), vec.end(), x);
            if(pos == vec.end()){
                cout<<-1<<'\n';
            }else{
                 cout<<*pos<<'\n';
            }
        }
    }

    return 0;
}
