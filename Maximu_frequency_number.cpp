// https://www.codingninjas.com/codestudio/problems/maximum-frequency-number_920319?leftPanelTab=0
#include<unordered_map>
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
	unordered_map<int , int> map;
// 	int mx = 0 , ans = 0;
	int maxFrequency  = 0 , maxAnswer = 0;
	for(int i = 0; i<n; i++){
		map[arr[i]]++;
		maxFrequency = max(maxFrequency , map[arr[i]]); 
	}
	int ans = INT_MAX;
	for(int i = 0; i<n; i++){
		if(maxFrequency == map[arr[i]])
		{
			ans = arr[i];
			break;
			
		}
	}