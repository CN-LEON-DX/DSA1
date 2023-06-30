#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a;
    while (n--){
        int k; cin >> k;
        mp[k]++;
        a.push_back(k);
    }
    for (auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (int x : a){
        for (auto &p : mp){
            if (x==p.first && p.second != 0){
                cout << x << " " << p.second << endl;
                p.second = 0;
                break;
            }
        }
    }
    return 0;
}
// Given an array of non-negative integers consisting of n elements, count the occurrences of the elements and print the pattern.

// Input Format

// The first line is the number of elements in the array. The second line is the N elements in the array.

// Constraints

// 2≤n≤10^6; 0≤ai≤10^7

// Output Format

// Print out the frequency of occurrence of elements in order from smallest to largest, then leave 1 line blank and print out the frequency of occurrence of elements in order of appearance in the array (each value is listed only once). ).

// Sample Input 0

// 8
// 2 1 2 3 4 8 2 3
// Sample Output 0

// 1 1
// 2 3
// 3 2
// 4 1
// 8 1

// 2 3
// 1 1
// 3 2
// 4 1
// 8 1