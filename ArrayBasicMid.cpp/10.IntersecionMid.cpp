// Given two integer arrays a and b consisting of n and m elements. Call array c and d an array consisting only of different elements of a and b, respectively. Find the intersection and union of arrays c and d and list them in ascending order.

// Instructions for finding intersections: Use a map to mark the values ​​that appear in array a, Use a map to mark the values ​​that appear in array b. Browse 1 of 2 maps and check if the element of the current map is in the 2nd map => intersection. Find a union: Put the elements in 2 arrays into a set

// Input Format

// The first line is the number of elements of the two sequences n and m. The second line is the n elements in the sequence 1. The third line is the m elements in the second sequence.

// Constraints

// 1≤n,m≤10^6; 0≤ai≤10^7

// Output Format

// The first line prints the intersection of two arrays c and d. The second line prints the union of two arrays c and d.

// Sample Input 0

// 5 6
// 1 2 1 2 7
// 1 2 3 4 5 6
// Sample Output 0

// 1 2
// 1 2 3 4 5 6 7
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    map<int, int> mp1;
    set<int> se;
    for (int i = 0;i<n;i++){
        int k; cin >> k;
        mp1[k] = 1;
        se.insert(k);
    }
    for (int i=0;i<m;i++){
        int k; cin >> k;
        se.insert(k);
        if (mp1[k]==1){
            mp1[k] = 2;
        }
    }
    for (auto p : mp1){
        if (p.second == 2){
            cout << p.first << " ";
        }
    }
    cout << endl;
    for (int x : se){
        cout << x << " ";
    }
    return 0;
}