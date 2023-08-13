https://www.codingninjas.com/studio/problems/make-unique-array_920329?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	map<int,int> ans;
	for(int i= 0;i< arr.size();i++){
		ans[arr[i]]++;
	}
	return arr.size()-ans.size();
}
