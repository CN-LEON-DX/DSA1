#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cout << abs(a[0]-a[1])  << " " << abs(a[n-1]-a[0]) << endl;
    for (int i=1;i<n-1;i++){
        int k =  min(abs(a[i]-a[i-1]), abs(a[i+1]-a[i]));
        cout << k << " " << max(abs(a[i]-a[0]), abs(a[n-1]-a[i])) << endl;
    }
    cout << a[n-1]-a[n-2] <<  " " << a[n-1]-a[0] << endl;
    return 0;
}