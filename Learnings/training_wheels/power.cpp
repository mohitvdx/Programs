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

    cout<<power(2,60); //changes 60 operations to 6 operations
    //vs
    // cout<<pow(2,60);

}


//this method of finding the power takes a time complexity of O(log n)
// this changes a code that takes 10^9 operations to 30 operation 
