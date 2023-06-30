#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >>n;
    int a[n];
    vector<int> vt(n);
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    vt[0] = 0;
    vt[1] = a[0];
    for (int i = 2;i<n;i++){
        vt[i] = vt[i-1]+a[i-1];
    }
    vt.push_back(a[n-1] + vt[n-1]);
    for (int x : vt) cout << x << " ";
    cout << endl;
    int p; cin >> p;
    while (p--){
        int x, y;
        cin >> x >> y;
        int d = 0;
        if (x==y) {
            cout << 0 << endl;
            d++;
        }
        else if (x==0 && d==0) cout << vt[y] << endl;
        else if (d==0 && x!=0)
        cout << vt[y] - vt[x-1] << endl;
    }
    return 0;
}
// Given the sequence A[] consisting of N elements, your task is to calculate the sum of the numbers in the sequence from position l to index r.

// Input Format

// The first line is an integer N. The next line consists of N integers A[i] and the number Q is the last number in the second line. The next Q lines each have 2 values ​​l, r.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 l r N

// Output Format

// Print the sum of the elements in the [l, r] range of each query per line.

// Sample Input 0

// 5
// 1 2 3 4 5
// first
// 1 3
// Sample Output 0

// 6