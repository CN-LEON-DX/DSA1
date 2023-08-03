#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if (n < 2) return false;
    for (int i = 2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
int main(){
    ifstream input;
    input.open("D:/MYGIT/DSA1/HandleFile/Ex1/number.txt", ios::out);
    ofstream output;
    output.open("D:/MYGIT/DSA1/HandleFile/Ex1/prime.txt");
    if (input.is_open() && output.is_open()){
        int n; 
        while (input >> n){
            if (check(n)){
                cout << n << " ";
                output << n << " and ";
            }
        }
    }else{
        cout << "Can't open this file or folder !";
    }
    input.close();
    output.close();
    return 0;
}