// Construct a complex number structure consisting of a real part and an imaginary part. Proceed to enter 2 complex numbers and calculate the sum, difference, and product of these 2 complex numbers and print to the screen.

// Input Format

// Line 1 is the real and imaginary parts of the 1st complex number. Line 2 is the real and imaginary parts of the 2nd complex number.

// Constraints

// The real and imaginary parts of complex numbers are integers in the range [-1000, 1000]

// Output Format

// In turn, print the sum, difference, and product of 2 complex numbers on each line.

// Sample Input 0

// 972 646
// 787 474
// Sample Output 0

// 1759 1120
// 185 172
// 458760 969130
#include <bits/stdc++.h>
using namespace std;
struct complex1{
    int a, b;
    complex1(int a1, int b1){
        a = a1;
        b = b1;
    }
    void sum(complex1 dif){
        cout << a + dif.a << " " << b+dif.b << endl;
    }
    void sub(complex1 dif){
        cout << a - dif.a << " " << b - dif.b << endl;
    }
    void dev(complex1 dif){
        cout << a*dif.a - b*dif.b << " " << a*dif.b + dif.a*b << endl;
    }
};
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    complex1 s(a, b);
    complex1 s1(c, d);
    s.sum(s1);
    s.sub(s1);
    s.dev(s1);
}