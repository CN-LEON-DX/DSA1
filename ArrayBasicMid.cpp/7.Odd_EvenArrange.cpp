#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    if (a%2==1 && b%2==1){
        return a>b;
    }else if (a%2==1 && b%2==0){
        return true;
    }else if (a%2==0 && b%2==1){
        return false;
    }
    return a<b;
}
int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    for (int x : a) cout << x << " ";
    return 0;
}
// Given an array of integers, arrange the elements in the array so that the odd elements come first and descending, and the elements after and ascending. See more examples to better understand the requirement.

// Input format

// The first line is the number of elements in the array n The second line is the ai elements in the array

// Limit

// 1≤n≤10^6; 1≤ai≤10^9

// Output Format

// Print Sorted Array

// Sample input 0

// ten
// 1 2 3 9 7 4 8 6 10 5
// Sample output 0

// 9 7 5 3 1 2 4 6 8 10