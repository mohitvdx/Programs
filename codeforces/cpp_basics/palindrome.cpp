#include <bits/stdc++.h>
using namespace std;

int main()
{
    long input;
    cin >> input;
    long reverse = 0;

    if (input < 0){
        cout << "NOT";
        return 0;
    }

    for (long i = input; i > 0; i = i / 10){
        reverse = reverse * 10 + i % 10;
    }
    cout << reverse << endl;

    if (input == reverse){
        cout << "YES";
    }

    else{
        cout << "NOT";
    }
}
