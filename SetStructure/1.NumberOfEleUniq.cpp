#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    // Way 1:
    set<int> se;
    while (n--){
        int k; cin >> k;
        se.insert(k);
    }
    cout << se.size() << endl;


    // // way 2:
    // for (int i=0;i<n;i++) cin >> a[i];
    // sort(a, a+n);
    // int count = 0;
    // for (int i=0;i<n-1;i++){
    //     if (a[i]!=a[i+1]) count++;
    // }
    // cout << count << endl;

    // // Way 3:

    // map<int, int> ma;
    // int key = 1;
    // for (int i=0;i<n;i++){
    //     int k; cin >> k;
    //     ma.insert(key++, k);
    // }
    // cout << mp.size() << endl;
    return 0;
}
// Given the sequence A[] consisting of N elements, how many distinct elements are there in the array? Note to solve this problem with 3 ways: Use set, map, sort.

// Input Format

// The first line is an integer N. The next line contains N integers A[i]

// Constraints

// 1≤ N ≤ 10^5; -10^9 A[i] 10^9

// Output Format

// Print the number of different elements in the array.

// Sample Input 0

// 5
// 2 1 2 1 3
// Sample Output 0

// 3