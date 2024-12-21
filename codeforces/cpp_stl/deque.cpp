#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q; 

    deque<int> dq;  

    unordered_map<string, function<void()>> operations;

    // Lambda functions for each operation
    operations["push_back"] = [&]() {
        int x;
        cin >> x;
        dq.push_back(x);
    };

    operations["push_front"] = [&]() {
        int x;
        cin >> x;
        dq.push_front(x);
    };

    operations["pop_front"] = [&]() {
        dq.pop_front();
    };

    operations["pop_back"] = [&]() {
        dq.pop_back();
    };

    operations["front"] = [&]() {
        cout << dq.front() << '\n';
    };

    operations["back"] = [&]() {
        cout << dq.back() << '\n';
    };

    operations["print"] = [&]() {
        int x;
        cin >> x;
        cout << dq[x - 1] << '\n';  // Deque indices are 0-based
    };

    // Process each query
    while (q--) {
        string command;
        cin >> command;
        operations[command]();  // Call lambda function
    }

    return 0;
}
