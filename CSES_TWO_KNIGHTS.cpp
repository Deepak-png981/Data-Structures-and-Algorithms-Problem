/*
Time limit: 1.00 s Memory limit: 512 MB
Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

Constraints
1≤n≤10000
Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/
#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll total_no_of_positions = (i * i) * (i * i - 1) / 2;
        ll attacking_positions = 4 * (i - 1) * (i - 2);
        cout << total_no_of_positions - attacking_positions << endl;
    }

    return 0;
}