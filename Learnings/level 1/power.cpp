//
// Created by Mohit verma on 13/11/24.
//

#include <bits/stdc++.h>
#define int long long
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1 ;
    }

    int half_power = power(a,b/2);
    if(b%2==0){
        return half_power*half_power;
    }else{
        return half_power*half_power*a;
    }
}

signed main(){

    cout<<power(3,7);

}


//this method of finding the power takes a time complexity of O(log n)
