#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i=0;i<n;i++){
        int x, y; cin >> x >> y;
        a[i] = make_pair(x, y);
    }
    sort(a.begin(), a.end(), cmp);

    int cnt = 1;
    int  index = a[0].second;
    for  (int i=1;i<n;i++){
        if (index<a[i].first){
            cnt++;
            index = a[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}