/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/
#include <iostream>
#include <unordered_map>
#include <string.h>
#define ll long long
using namespace std;
// approach one
void solve(int n, int arr[])
{
    ll sum = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        sum = sum ^ arr[i] ^ i;
    }
    sum = sum ^ n ^ (n - 1);
    cout << sum;
}
// approach two
/*
void solve(int n, int arr[])
{
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << (n * (n - 1)) / 2 - sum << endl;
}
*/
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    solve(n, arr);
    return 0;
}