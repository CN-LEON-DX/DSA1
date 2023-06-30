// Problem
// submit
// discuss
// City X has N towns on the main road. The norm of the towns is a[1],a[2], …, a[N], respectively, these coordinates are distinct, no two coordinates overlap. The city government wants to build a fast BRT line to connect the two closest towns. Try to see how long this route is? And how many pairs of towns have the same potential to build this BRT line.

// Input format

// The first line is an integer N (N ≤ 1000 000). The next line contains N integer A[i]

// Limit

// N 1000 000;-10^9 A[i] 10^9

// Output Format

// Of the two integers C and D, each is the shortest distance between the two towns, and the number of pairs of towns with the same shortest time interval.

// Sample input 0

// 4
// 6 -3 0 4
// Sample output 0

// 2 1
// Explanation 0

// The smallest distance between two towns is between the town at coordinate 4 and coordinate 6.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> se;
    for (int i=0;i<n;i++) {
        int k; cin >> k;
        se.insert(k);
    }
    vector<int> a;
    int min_distance = 1e9;
    auto it = se.begin();
    int bd = *it;
    it++;
    for (;it!=se.end();it++){
        int curent = *it;
        int  t= curent - bd;
        a.push_back(t);
        bd = curent;
        if (t<min_distance) min_distance = t;
    }
    int cnt = 0;
    for (int x : a){
        if (x==min_distance) cnt++;
    }
    cout << min_distance << " " << cnt << endl;
    return 0;
}