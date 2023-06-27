#include <bits/stdc++.h>
using namespace std;
int n;
int he_has = 0;
bool check(int n)
{
    int cnt = 0;
    while (n--){
        int k; cin >> k;
        if (cnt == 0 && (k==100 || k==50)) return false;
        if (k==25){
            he_has += 25;
        }else if (k==50){
            if (he_has >= 25){
                he_has += 25;
            }else return false;
        }
        cnt++;
    }
}
int main()
{
    cin >> n;
    if (check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}