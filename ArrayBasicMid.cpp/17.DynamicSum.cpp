#include <bits/stdc++.h>
using namespace std;

int F[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }    
    F[0] = a[0];
    for (int i=1;i<n;i++){
        F[i] = F[i-1] + a[i];
        //cout << a[i-1] << endl;
    }
    int p; cin >> p;
    while (p--){
        int x, y; cin >> x >> y;
        x--; y--;
        if (x == 0) cout << F[y] << endl;
        else
        cout << F[y] - F[x-1] << endl;
    }
    
    return 0;
}
// Given the sequence A[] consisting of N elements, your task is to calculate the sum of the numbers in the sequence from position l to index r.

// Input Format

// The first line is an integer N. The next line consists of N integers A[i] and the number Q is the last number in the second line. The next Q lines each have 2 values ​​l, r.

// Constraints

// 1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 <= l <=  r<= N

// Output Format

// Print the sum of the elements in the [l, r] range of each query per line.

// Sample Input 0

// 5
// 1 2 3 4 5
// 1
// 1 3
// Sample Output 0

// 6