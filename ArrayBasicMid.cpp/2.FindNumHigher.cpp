#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    int maxSofar =a[0];
    cout << a[0] << " ";
    for (int i=1;i<n;i++){
        if (a[i]>maxSofar){
            cout << a[i] << " ";
            maxSofar = a[i];
        }
    }
    return 0;
}
// The new "Die Hard" movie has just been released! There are n people at the cinema box office standing in a big line. Each of them has a banknote in denominations of 100, 50 or 25 rubles. A ticket "Die Hard" costs 25 rubles. Can the reservationist sell tickets to each person and pay the change if he doesn't have the money at first and sell tickets in the correct order of people in the line?

// Input Format

// The first line contains an integer n - the number of people in the row. The next line contains n integers, each equal to 25, 50 or 100 - the value of the bills everyone has

// Constraints

// 1≤n≤10^6

// Output Format

// Print YES if the seller can sell and pay the change to everyone in the line, otherwise print NO

// Sample Input 0

// 5
// 25 25 25 50 50
// Sample Output 0

// YES
// Sample Input 1

// 2
// 50 25
// Sample Output 1
