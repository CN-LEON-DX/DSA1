#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll count(int a[], int n, int m)
{
    unordered_set<int> se;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = m - a[i];
        if (se.find(temp) != se.end())
        cnt++;
        se.insert(a[i]);
    }
    return cnt;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    cout << count(a, n, k) << endl;
    return 0;
}