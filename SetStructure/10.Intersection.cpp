// Given arrays A[] and B[] consisting of N and M integers respectively, your task is to find the intersection of these two arrays and print them in the order they appear in array A[].

// Suggest :

// Method 1: Use 2 sets to store 2 arrays A, B then traverse 1 of 2 arrays and search for the occurrence of the element being browsed in the remaining array.

// Method 2: Use a map to mark, iterate over the elements in the array A[] and give the map of each element in the array A[] = 1, iterate through the array B[] then check if the map of the element in array B is equal to 1, then convert to 2. Finally, traverse the map and print out the elements marked as 2.

// Input Format

// Line 1 contains N and M

// Line 2 contains N numbers in array A[]

// Line 3 contains M numbers in array B[]

// Constraints

// 1<=N,M<=10^5

// -10^9<=A[i],B[i]<=10^9

// Output Format

// Print the set of 2 arrays in order of appearance in array A[]

// Sample Input 0

// 9 8
// 7 5 0 0 1 6 2 7 3
// 6 4 9 4 2 8 3 5
// Sample Output 0

// 5 6 2 3
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    for (int i=0;i<m;i++){
        cin >> b[i];
    }
    set<int> se(b, b+m);
    for (int x : a){
        if (se.count(x)){
            cout << x << " ";
            se.erase(x);
        }
    }
    return 0;
}