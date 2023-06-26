#include <iostream> 
#include <set>

using namespace std;
int main(){
    int n; cin >> n;
    set<pair<int, int>> se;
    while (n--){
        int x, y; cin>> x >> y;
        se.insert(make_pair(x, y));
    }
    cout << se.size() <<  endl;
    return 0;
}