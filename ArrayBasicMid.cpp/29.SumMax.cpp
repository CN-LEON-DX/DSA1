#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll findSum(int arr[], int n){
    sort(arr, arr+n);
    ll a = 0;
    ll b = 0;
    for (int i=0;i<n;i++){
        int k = i & 1;
        cout << k << endl; 

        // same with the way you use if (i%2==0) 
        // 2 = 00010, 1 = 0001, result of (2&1) == 0000 => even 
        if (i & 1){
            a = a*10 + arr[i];
        }else{
            b = b*10 + arr[i];
        }
    }
    //cout << a << " " << b << endl;
    return a+b;
}
int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    cout << findSum(a, n) << endl;
    return 0;
}
// [1-Dimensional Array]. Lesson 29. Minimum Sum
// Problem
// Submissions
// Discussions
// Given an array A[] consisting of numbers from 0 to 9. Your task is to find the minimum sum of two numbers created by the numbers in the array A[]. Notice, all the numbers in the array A[] are used to make two numbers. Note that if you form numbers with leading zeros then you can get rid of those meaningless zeros.

// Input Format

// The first line is an integer N. The next line contains N integers A[i]

// Constraints

// 1≤N≤30; 0≤A[i]≤9

// Output Format

// Print the result of the problem on 1 line.

// Sample Input 0

// 6
// 6 8 4 5 2 3
// Sample Output 0

// 604