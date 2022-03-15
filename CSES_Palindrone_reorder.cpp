/*
    Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example

Input:
AAAACACBA

Output:
AACABACAA
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    string s;
    cin >> s;   //taking input as a string
    int f[26] = {0};        
    for (int i = 0; i < s.size(); i++)
    {
        f[s[i] - 65]++;         //integers from the char of the string ---> increamenting its value
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (f[i] % 2 != 0)      // if value is not even --> odd
            count++;
    }
    if (count > 1)              // if the count of odd is more than one then no solution should be there
        cout << "NO SOLUTION" << endl;
    else                
    {
        vector<char> v1, v2;
        for (int i = 0; i < 26; i++)
        {
            if (f[i] % 2 != 0)              
            {
                while (f[i]--)
                {
                    v2.push_back(i + 65);
                }
            }
            else if (f[i] > 0 and f[i] % 2 == 0)
            {
                int x = f[i] / 2;
                while (x--)
                {
                    v1.push_back(i + 65);
                }
            }
        }
        for (int i = 0; i < v1.size(); i++)
        {
            cout << v1[i];
        }
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i];
        }
        for (int i = v1.size() - 1; i >= 0; i--)
        {
            cout << v1[i];
        }
    }

    return 0;
}