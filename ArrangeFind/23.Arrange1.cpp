#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b ){
    if (a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}
bool cmp1(pair<int, int> a, pair<int, int> b ){
    return a.second > b.second;
}
int main(){
    int n; cin >> n;
    map<int, int> mp;
    map<int, int> mp1;
    vector<int> a;
    while (n--){
        int k; cin >> k;
        a.push_back(k);
        mp[k]++;
        mp1[k]++;
    }
    vector<pair<int, int>> vt;
    for (int x : a){
        if (mp[x]){
            vt.push_back(make_pair(x, mp[x]));
            mp[x] = 0;
        }
    }
    vector<pair<int, int>> vt1;
    for (int x : a){
        if (mp1[x]){
            vt1.push_back(make_pair(x, mp1[x]));
            mp1[x] = 0;
        }
    }
    stable_sort(vt.begin(), vt.end(), cmp);
    stable_sort(vt1.begin(), vt1.end(), cmp1);
    for (auto x : vt){
        int sn = x.first;
        int numberOf = x.second;
        while (numberOf--){
            cout << sn << " ";
        }
    }
    cout << endl;
    //cout << "Case 2" << endl;
    for (auto x : vt1){
        int sn = x.first;
        int numberOf = x.second;
        while (numberOf--){
            cout << sn << " ";
        }
    }
    //cout << "Case 2" << endl;
    return 0;
}
// Given an array A[] with n elements. Please do the following:

// Sort the elements in the array in descending order of frequency, if 2 numbers have the same frequency, the smaller number will be printed first.

// Sort the elements in the array in descending order of frequency, if two numbers have the same frequency, the number that appears first will be printed first.

// Input Format

// The first line of input n is the number of elements of the array A[]; The next line is n numbers A[i] ; Numbers are written a few spaces apart.

// Constraints

// 1<=n<=10^5; 0<=A[i]<=10^6;

// Output Format

// The first line prints the ordered sorted numbers 1. The 2nd line prints the ordered sorted numbers 2.

// Sample Input 0

// ten
// 6 8 4 10 3 4 10 2 4 1
// Sample Output 0

// 4 4 4 10 10 1 2 3 6 8
// 4 4 4 10 10 6 8 3 2 1
// Sample Input 1

// ten
// 2 5 6 7 2 1 3 10 3 6
// Sample Output 1

// 2 2 3 3 6 6 1 5 7 10
// 2 2 6 6 3 3 5 7 1 10