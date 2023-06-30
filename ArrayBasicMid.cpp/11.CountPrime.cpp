#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int k;
    map<int, int> mp;
    vector<int> a;
    while (cin >> k)
    {
        if (check(k))
        {
            mp[k]++;
            a.push_back(k);
        }
    }
    for (int x : a)
    {
        for (auto p : mp){
            if (x==p.first){
                cout << x << " " << p.second << endl;
                mp.erase(x);
                break;
            }
        }
    }
    return 0;
}
// Given a sequence of integers with unknown number of elements, count the occurrences of the primes in the sequence and print them in the order in which they appear in the sequence.

// Input Format

// Consists of multiple lines containing the integers in the sequence

// Constraints

// A sequence of no more than 10,000 non-negative integers. The numbers in the sequence are non-negative integers no more than 10^9

// Output Format

// Print the prime numbers in the sequence with its frequency.

// Sample Input 0

// 2 3 5 3 2 5 1
// Sample Output 0

// 2 2
// 3 2
// 5 2