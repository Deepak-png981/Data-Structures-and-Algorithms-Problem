// https://www.codingninjas.com/codestudio/problems/elements-occur-more-than-n-k-times_1113146?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
#include <map>
vector<int> countTheNumber(vector<int> &arr, int n, int k)
{
    // Write your code here.
    map<int, int> map;
    int count = n / k;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    vector<int> ans;
    for (auto i : map)
    {
        if (i.second >= count)
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}