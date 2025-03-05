#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int, int>

void solve() {
    int q;
    cin >> q;

    queue<int> arrivalQueue; //waiter 1 FIFO queue
    priority_queue<pii> maxHeap; //waiter 2 max-heap (money, -customerID)
    unordered_set<int> served; // served customers

    int customerID = 1;
    
    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int m;
            cin >> m;
            arrivalQueue.push(customerID);
            maxHeap.push({m, -customerID}); // Store negative ID for tiebreaker
            customerID++;
        } 
        else if (type == 2) {
            while (!arrivalQueue.empty() && served.count(arrivalQueue.front())) {
                arrivalQueue.pop(); // Skip already served customers
            }
            int servedID = arrivalQueue.front();
            arrivalQueue.pop();
            served.insert(servedID);
            cout << servedID << " ";
        } 
        else if (type == 3) {
            while (!maxHeap.empty() && served.count(-maxHeap.top().second)) {
                maxHeap.pop(); // Skip already served customers
            }
            int servedID = -maxHeap.top().second;
            maxHeap.pop();
            served.insert(servedID);
            cout << servedID << " ";
        }
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
