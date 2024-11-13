#include <bits/stdc++.h>
using namespace std;

int main(){
char input;
cin>>input;

int ascii = (int)input;

if(ascii >= 48 && ascii<=57){
cout<<"IS DIGIT";
 }
else if (ascii >= 65 && ascii <= 91){
cout<<"ALPHA"<<endl<<"IS CAPITAL";

}
else if (ascii >=97 && ascii<=123 ){
cout<<"ALPHA"<<endl<<"IS SMALL";
}

}
