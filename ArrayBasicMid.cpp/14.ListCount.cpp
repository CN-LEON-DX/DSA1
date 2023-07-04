#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n < 10)
    {
        return true;
    }
    int last = n % 10;
    n /= 10;
    while (n)
    {
        if (last < n % 10)
            return false;
        n /= 10;
    }
    return true;
}
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int k;
    map<int, int> mp;
    while (cin >> k)
    {
        if (check(k))
        {
            mp[k]++;
        }
    }
    vector<pair<int, int>> a(mp.begin(), mp.end());
    sort(a.begin(), a.end(), cmp);
    for (auto x : a){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}