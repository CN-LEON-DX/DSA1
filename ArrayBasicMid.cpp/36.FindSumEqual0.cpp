#include <bits/stdc++.h>
using namespace std;
bool check(set<int> se){
    for (int x : se){
        if (x<=0){
            if (se.find(-x) != se.end()) return true;
        }
    }
    return false;
}
int main(){
    int n; cin >> n;
    set<int> se;
    int d = 0;
    while (n--){
        int k; cin >> k;
        if (k==0){
            d++;
        }
        se.insert(k);
    }
    if (d>=2) cout << 1 << endl;
    return 0;
}