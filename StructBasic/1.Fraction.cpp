#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
struct phanSo{
    int a1, b1;
    phanSo(int a, int b){
        a1 = a;
        b1 = b;
    }
    void printPs(int a, int b){
        bool am = false;
        bool pos = false;
        if (a>0){
            pos = true;
        }
        if (a<0){
            am = true;
        }
        a = abs(a);
        b = abs(b);
        int gc  = gcd(a, b);
        a/=gc;
        b/=gc;
        if (pos)
        cout << a << "/" << b << endl;
        else if (am){
            cout << "-" << a << "/" << b << endl;
        }
        else cout << 0 << endl;
    }
    void printSub(phanSo khac) {
        int k = a1*khac.b1-khac.a1*b1;
        int d = b1*khac.b1;
        return printPs(k, d);
    }
    void printSum(phanSo khac) {
        int k = a1*khac.b1+khac.a1*b1;
        int d = b1*khac.b1;
        return printPs(k, d);
    }
    
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x, y, m, n;
    cin >> x >> y >> m >> n;
    phanSo a(x, y);
    phanSo b(m, n);
    a.printPs(a.a1, a.b1);
    b.printPs(b.a1, b.b1);
    a.printSum(b);
    a.printSub(b);
    // cout << a.a1 << " " << a.b1 << endl;
    // cout << b.a1 << " " << b.b1 << endl;
    return 0;
}
// Construct a fraction structure with 2 components, the numerator and the denominator. Proceed to enter 2 fractions from the keyboard and print the fraction in minimal form. Calculate the sum and difference of 2 fractions and print them in simplified form. Note that in the case of negative denominators, put the negative sign above the numerator

// Input Format

// The first line is the numerator and denominator of the first fraction. The second line is the numerator and denominator of the second fraction.

// Constraints

// The numerator and denominator are integers in the range [1, 1000]

// Output Format

// Line 1 prints the first fraction in its simplest form. Line 2 prints the second fraction in its simplest form. Line 3 prints the sum of 2 fractions in minimal form. Line 4 prints the sign of the 2 fractions in minimal form.

// Sample Input 0

// 145 639
// 911 93
// Sample Output 0

// 145/639
// 911/93
// 198538/19809
// -189548/19809