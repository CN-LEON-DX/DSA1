#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    set<int> se;
    for (int i=0;i<n;i++){
        if (se.find(a[i])==se.end()){
            se.insert(a[i]);
            cout << a[i] << " ";
        }
    }
    return 0;
}

// Given the sequence A[] includes N elements, please list the values ​​that appear in the sequence in the order of appearance, each value is listed only once.

// Hint: Use set to save the elements that have been printed before, encounter a[i] element, then quickly check in the set if the value a[i] has not been printed yet

// Input Format

// The first line is an integer N. The second line contains N integers A[i]

// Constraints

// 1≤ N ≤ 10^5; 0 ≤ A[i], X ≤ 10^9;

// Output Format

// Print the values ​​that appear in the array in the order they appear.

// Sample Input 0

// 8
// 1 2 3 2 1 3 4 8
// Sample Output 0

// 1 2 3 4 8