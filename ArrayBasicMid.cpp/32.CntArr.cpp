// Given an array A[] consisting of N elements and an integer K, your task is to find the shortest consecutive subarray with the sum of elements equal to K. Example with array A[] = {1, 1, 3, 1 , 2, 4, 1, 1, 2} and K = 6 then the shortest subarray that sums to 6 is 2.

// Input Format

// The first line consists of N and K; The second line contains the elements in the array A[];

// Constraints

// 1<=K<=N<=10^6; -0<=A[i]<=10^6;

// Output Format

// Print the length of the shortest subarray, or print -1 if there is no subarray with a sum of K

// Sample Input 0

// 6 4
// 1 1 1 3 2 4
// Sample Output 0

// 1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int count = 0;
    int sum = 0;
    while (n--){
        int k; cin >> k;
        sum+=k;
        if (sum == m){
            count++;
        }
        if (sum > m){
            sum =  0;
        }
    }
    cout << count << endl;
    return 0;
}