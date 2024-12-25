#include <bits/stdc++.h>
using namespace std;

struct Friend {
    string name;
    int arabic, math, science, english;

    int total() const {
        return arabic+ math+ science+ english;
    }
};

bool compare(const Friend &a, const Friend &b){
    if(a.total()!=b.total()){
        return a.total() > b.total();
    }

    return a.name < b.name;
}

int main(){
    int n;
    cin>>n;

    vector<Friend> friends(n);

    for(int i=0; i<n; i++){
        cin >> friends[i].name >> friends[i].arabic >> friends[i].math >> friends[i].science >> friends[i].english;
    }

    sort(friends.begin(),friends.end(),compare);

    for(const auto &f : friends){
        cout << f.name << " "<<f.total()<<" "<< f.arabic << " " << f.math << " " << f.science << " " << f.english << '\n';
    }

    return 0;
}