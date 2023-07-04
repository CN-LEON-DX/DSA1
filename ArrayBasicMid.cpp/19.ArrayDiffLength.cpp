#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<ll, vector<int>> mp;
    int p;
    cin >> p;
    n--;
    vector<int> se;
    se.push_back(p);
    ll sum = 0;
    sum += p;
    ll max1 = 0;
    max1 += p;

    while (n--)
    {
        int k;
        cin >> k;
        if (p != k)
        {
            p = k;
            sum += p;
            se.push_back(p);
        }
        else
        {
            if (max1 < sum)
            {
                max1 = sum;
            }
            mp.insert(make_pair(sum, se));
            se.clear();
            se.push_back(p);
            sum = p;
        }
    }
    if (max1 < sum)
    {
        max1 = sum;
    }
    mp.insert(make_pair(sum, se));
    int size1 = 0;
    int maxElement = 0;
    for (auto x : mp)
    {
        auto p = x.second;
        if (p.size() > size1) {
            size1 = p.size();
        }
    }
    for (auto x : mp){
        auto p = x.second;
        if (p.size()==size1){
            maxElement = x.first;
        }
    }
    cout << size1 << endl;
    auto se1 = mp[maxElement];
    for (auto x : se1){
        cout << x << " ";
    }
    return 0;
}
// ACCEPTED
// Given the sequence A[] consisting of N elements, your task is to find the length of the consecutive subsequence of elements such that the adjacent elements in the subsequence are all different. If there are multiple subsequences that satisfy, print the subsequence with the greatest sum.

// Input Format

// The first line is an integer N. The next line contains N integers A[i].

// Constraints

// 1≤ N ≤ 10^6; 1 A[i] 10^6

// Output Format

// Print the answer of the problem on 2 lines. The first line is the length of the longest subsequence. The second line is the elements in that subsequence.

// Sample Input 0

// 8
// 1 2 3 4 4 5 6 7
// Sample Output 0

// 4
// 4 5 6 7