// Given array A[] contains N elements. You are asked to answer queries, each of which asks you to count the number of different values ​​from index L to index N - 1.

// Hint: Let F[i] be the number of different values ​​from index i to index n - 1 in the array, pre-build the array F[i], then each query only needs to access F [l] is to be able to find the number of different values ​​from l to n - 1. The way to build the array F[] is to browse from the end and use 1 set to store different values ​​from the end, assign F[i] = set.size()

// Input Format

// The first line is N - the number of elements of the array

// The second line contains N elements A[i] of the array

// The 3rd line is the number of queries Q

// The next Q lines each are a number L.

// Constraints

// 1<=N<=1000000

// 1<=A[i]<=10^9

// 1<=Q<=10000

// 0<=L<=N-1

// Output Format

// For each query print the result on 1 line.

// Sample Input 0

// 9
// 3 3 3 4 2 0 3 1 2
// 4
// 8
// 6
// first
// 7
// Sample Output 0

// first
// 3
// 5
// 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p;
    cin >> p;
    while (p--)
    {
        int t;
        cin >> t;
        set<int> se;
        if (t < n)
        {
            for (int i = t; i < n; i++)
            {
                se.insert(a[i]);
            }
        }
        cout << se.size() << endl;
    }
    return 0;
}