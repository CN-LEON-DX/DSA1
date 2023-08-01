#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool check(string s)
{
    string k = s;
    reverse(k.begin(), k.end());
    return k == s;
}
struct word
{
    string a;
    int fre =0;
    word()
    {
    }
};
bool cmp(word x, word y)
{
    if (x.fre != y.fre)
        return x.fre > y.fre;
    return x.a < y.a;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<word> a;
    string s;
    while (cin >> s)
    {
        if (check(s))
        {
            bool found = false;
            for (word &x : a) // need & cuz its can change fre reference to frequency
            {
                if (x.a == s)
                {
                    x.fre++;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                word wor = word();
                wor.a = s;
                wor.fre++;
                a.push_back(wor);
            }
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (word x : a)
    {
        cout << x.a << " " << x.fre << endl;
    }
    return 0;
}
