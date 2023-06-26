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
// Given N points in the Oxy coordinate system, determine how many distinct points there are in the given points. Hint: Use set or map to save pair

// Input Format

// Line 1 is N : the number of points given

// The next N lines each contain the coordinates and coordinates of a point

// Constraints

// 1<=N<=10^6

// -10^6<=x,y<=10^6

// Output Format

// Print out different number of points

// Sample Input 0

// 20
// 2 2
// 0 1
// 2 1
// 2 0
// 2 1
// 2 2
// 0 0
// 2 0
// 0 2
// 0 1
// 1 1
// 0 2
// 0 2
// 1 1
// 0 2
// 0 1
// 1 1
// 1 1
// Sample Output 0

// 8