// The problem is very simple, calculate N! remainder by (10^9 + 7).

// Input Format

// Line 1 is the number of test sets T

// The next T lines are each a non-negative integer N .

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Output the result of each test on 1 line

// Sample Input 0

// 5
// 11
// 6
// 8
// 10
// 13
// Sample Output 0

// 39916800
// 720
// 40320
// 3628800
// 227020758
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod  = 1000000007;
ll F[1000001];
int main(){ 
    F[0] = 0;
    F[1] = 1;
    for (ll i = 2;i<=1000000;i++){
        F[i] = F[i-1]*i % mod;
    }
    int n; cin >> n;
    while (n--){
        int k;
        cin >> k;
        cout << F[k] << endl;
    }
}