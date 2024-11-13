#include <bits/stdc++.h>
using namespace std;

int main (){
long long int k,s;
cin>>k>>s;
long long int count=0;
for (long long int a=0; a<=k;a++){
for (long long int b=0; b<=k; b++){
if (s-(a+b)>=0 && s-(a+b)<=k){
count++;
}
}
}
cout<<count;
}
