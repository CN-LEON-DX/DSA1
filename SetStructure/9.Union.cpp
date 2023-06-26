#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, p; cin >> n >> p;
    set<int > se;
    n+=p;
    while (n--){
        int p; cin >> p;
        se.insert(p);
    }
    for (auto it = se.rbegin();it!= se.rend();it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
// Given arrays A[] and B[] consisting of N and M integers, respectively, your task is to find the union of these two arrays and print them in order from largest to smallest.

// Hint: To find the union of 2 arrays, just use 1 set and save every element of the 2 arrays, set will automatically remove duplicate elements in both arrays.

// Input Format

// Line 1 contains N and M

// Line 2 contains N numbers in array A[]

// Line 3 contains M numbers in array B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// Print the set of 2 arrays in descending order

// Sample Input 0

// 9 6
// 7 9 2 0 0 5 6 4 7
// 9 7 3 4 5 7
// Sample Output 0

// 9 7 6 5 4 3 2 0