#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
cin>>a>>b;
int c = min(a,b);
for(int i=c;i>0;i--){
if(a%i==0 && b%i==0){
cout<<i;
return 0;
}}
}
