// Given arrays A[] and B[] consisting of N and M integers respectively, your task is to find the elements that appear in the first array but do not appear in the second array, listed in order from least to big.

// Hint: Use 2 sets to store array A, B. Browse the elements in set 1 and find if the element is not in set 2, then print it.

// Input Format

// Line 1 contains N and M

// Line 2 contains N numbers in array A[]

// Line 3 contains M numbers in array B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// Print out the answer of the problem

// Sample Input 0

// 66
// 1 9 3 8 0 7
// 3 1 7 3 7 5
// Sample Output 0

// 0 8 9
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    set<int> se;
    for (int i=0;i<n;i++) {
        int k; cin >> k;
        se.insert(k);
    }
    set<int> se1;
    for (int i=0;i<m;i++) {
        int k; cin >> k;
        se1.insert(k);
    }
    for (int x : se){
        bool k = false;
        for (int p : se1){
            if (x==p) k = true;
        }
        if (!k) cout << x << " ";
    }
    return 0;
}