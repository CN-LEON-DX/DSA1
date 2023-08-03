#include <iostream>
#include <string>
using namespace std;
string changeToEx(string address){
    if (string.size()==0) return;
    for (char &x : address){
        if (x == "\\") x = '/';
    }
    return address;
}