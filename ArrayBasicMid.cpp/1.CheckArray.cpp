#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++)cin >> a[i];
    set<int>  se(a, a+n);
    if (se.size() != n) cout<< "NO";
    else cout << "YES";
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
// Checks whether the given array is strictly increasing, i.e. the following elements are always larger than the preceding element.

// Input Format

// The first line is the number of elements in the array. The second line is the N elements in the array.

// Constraints

// 1≤n≤10^6; 1≤ai≤10^9

// Output Format

// Print YES if the elements in the array are ascending, otherwise print NO.

// Sample Input 0

// 6
// 1 2 3 8 9 22
// Sample Output 0

// YES
// Sample Input 1

// 5
// 1 2 8 8 10
// Sample Output 1

// NO