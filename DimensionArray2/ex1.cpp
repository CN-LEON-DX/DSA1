#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m; cin >> n >> m;
    int a[n][m];
    int max1 = -1e9;
    int min1 = 1e9;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
            if (a[i][j]>max1){
                max1 = a[i][j];
            }
            if (a[i][j]<min1){
                min1 = a[i][j];
            }
        }
    }
    cout << min1 << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
            if (a[i][j]==min1){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    cout << max1 << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> a[i][j];
            if (a[i][j]==max1){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    //cout << max1 << " " << min1 << endl;
    
    return 0;
}
