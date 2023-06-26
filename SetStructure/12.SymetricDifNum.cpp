
// Given arrays A[] and B[] consisting of N and M integers, respectively, your task is to find the elements that appear in 1 of the 2 arrays but cannot appear in both arrays.

// image

// Input Format

// Line 1 contains N and M

// Line 2 contains N numbers in array A[]

// Line 3 contains M numbers in array B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// Print out the answer of the problem in order from smallest to largest

// Sample Input 0

// 9 8
// 9 0 2 3 9 7 8 1 4
// 1 0 2 1 1 2 0 5
// Sample Output 0

// 3 4 5 7 8 9
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    set<int> se;
    set<int> se1;
    set<int> result;
    for (int i=0;i<n;i++) {
        int k; cin >> k;
        se.insert(k);
    }
    for (int i=0;i<m;i++) {
        int k; cin >> k;
        se1.insert(k);
    }
    for (int x : se){
        bool k = false;
        for (int p : se1){
            if (x==p) k = true;
        }
        if (!k) result.insert(x);
    }
    for (int x : se1){
        bool k = false;
        for (int p : se){
            if (x==p) k = true;
        }
        if (!k) result.insert(x);
    }
    for (int x : result) cout << x << " ";
    return 0;
}