#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        char k;
        cin >> k;
        mp[k]++; //Dua gia tri k vao sau do tao  value la tan xuat hien  ++;
    }
    auto it2 = mp.begin();
    auto it1 = mp.end();
    it1--;
    // trong set hoac map khong duoc dung iterator - so vd: it-2, it -3....
    cout << (*it2).first << " " << (*it2).second << endl << endl;
    cout << (*it1).first << " " << (*it1).second << endl << endl;
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (auto it = mp.rbegin();it!= mp.rend();it++){
        cout << (*it).first << " " <<(*it).second << endl;
    }
    return 0;
}
// For N characters to be entered from the keyboard, please do the following requirements

// Print the character with the smallest dictionary and its occurrence frequency
// Print the character with the largest dictionary and its occurrence frequency
// Print the characters that appear in the given N characters in ascending lexicographic order with its frequency
// Print the characters that appear in the given N characters in descending lexicographic order with its frequency
// Input Format

// Line 1 is N : number of characters

// Line 2 contains N characters separated by 1 space

// Constraints

// 1<=N<=10^5
// Output Format

// Print the results of 4 requests, each request is separated by 1 line
// Sample Input 0

// 20
// E a q A z A F F A f G r r l p g D p n CODE
// Sample Output 0

// A 3

// z 1

// A 3
// D 1
// E 1
// F 2
// G 1
// M 1
//a 1
// f 1
// g 1
// l 1
// n 1
// p 2
// q 1
// r 2
// z 1

// z 1
// r 2
// q 1
// p 2
// n 1
// l 1
// g 1
// f 1
//a 1
// M 1
// G 1
// F 2
// E 1
// D 1
// A 3