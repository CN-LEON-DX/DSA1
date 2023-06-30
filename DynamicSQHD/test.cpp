// Given the Fibonacci sequence with F[0] = 0, F[1] = 1, F[n] = F[n - 1] + F[n - 2] with n >= 2. Calculate F[n] divided remainder for 10^9 + 7.

// Input Format

// Line 1 is the number of test sets T

// The next T lines are each a non-negative integer N .

// Constraints

// 1<=T<=10000

// 0<=N<=10^6

// Output Format

// Output the result of each test on 1 line

// Sample Input 0

// 6
// 5
// 13
// 10
// 14
// 8
// 11
// Sample Output 0

// 5
// 233
// 55
// 377
// 21
// 89
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1000000007;
ll F[1000001];
int main(){
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;
    for (ll i=3;i<=1000000;i++){
        F[i] = F[i-1] + F[i-2] + F[i-3];
        F[i] %= mod;
    }
    int n; cin >> n;
    while (n--){
        int k; cin >> k; 
        cout << F[k] << endl;
    }
    return 0;
}