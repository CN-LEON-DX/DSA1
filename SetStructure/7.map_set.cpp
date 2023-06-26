#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin  >> n;
    map<int, int> mp;
    for (int i=1;i<=n;i++){
        set<int> se;
        for (int j=1;j<=n;j++){
            int k; cin >> k;
            se.insert(k);
        }
        for (auto x : se){
            mp[x]++;
        }
    }
    bool found = false;
    for (auto p : mp){
        if (p.second==n) {
            cout << p.first << " ";
            found = true;
        }
    }
    if (!found) cout << "NOT FOUND";
    return 0;
}

// Given a number table with N lines and each line with N numbers, your task is to print the values ​​that appear in every line. Hint: Use map marker, line 1 : mark the values ​​in line 1 with value = 1, line 2 will check which value is marked in line 1, then mark at line 2, same goes to line n , the numbers marked in all n lines will satisfy the requirement.

// Input Format

// Line 1 is N : line number of the number table

// The next N lines each contain N integers separated by 1 space

// Constraints

// 1<=N<=100

// The numbers in the number table are integers int

// Output Format

// Print the numbers that appear in every line in order from smallest to largest, if no number exists, print NOT FOUND
// Sample Input 0

// 5
// 0 1 4 0 4
// 3 2 2 3 0
// 0 3 4 0 1
// 0 1 4 4 1
// 0 0 0 0 2
// Sample Output 0

// 0