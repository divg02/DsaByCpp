https://www.codingninjas.com/studio/problems/first-missing-positive_699946?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTab=1

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    for(int i= 0;i< n;){
        if(arr[i] <= 0){
            i++;
        }
        else if(arr[i] == count){
            count++;
            i++;
        }
        else{
            return count;
        }
    }
    return count;
}
