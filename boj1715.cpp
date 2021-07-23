/*

#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        pq.push(-tmp);
    }
    int answer = 0;
    while (pq.size() > 1) {
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();
        answer += (t1 + t2);
        pq.push(t1 + t2);
    }
    cout << -answer << '\n';
    
}*/