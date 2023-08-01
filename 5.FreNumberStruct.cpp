#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct Number{
    string number;
    int fre = 0;
    int id;
    Number(int id){
        id = id;
    }
};
bool check(string s){
    bool check1 = true;
    bool check2 = true;
    for (char x : s){
        int k = x - '0';
        if (k%2==1) {
            check1= false;
            break;
        }
    }
    string k = s;
    reverse(k.begin(), k.end());
    if (k!=s) check2 = false;
    return check1 && check2;
}
bool cmp(Number x, Number y){
    if (x.fre != y.fre){
        return x.fre > y.fre;
    }
    return x.id < y.id;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    vector<Number> a;
    int id = 1;
    while (cin >> s){
        if (check(s)){
            bool checkNum = false;
            for (Number &x : a){
                if (x.number == s){
                    x.fre++;
                    checkNum = true;
                    break;
                }
            }
            if (!checkNum){
                Number num = Number(id);
                num.number = s;
                num.fre++;
                a.push_back(num);
                id++;
            }
            
        }
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (Number x : a){
        cout << x.number << " " << x.fre << endl;
    }
    return 0;
}
// Must use struct to slove this problem
// Sample Input 0

// 3333    
// 2882 2222 123    123331 111 3333    
// 3333 2882 123    3333 2222 2882    
// 123331 2332 1131    123 111 2332    
// Sample Output 0

// 2882 3
// 2222 2