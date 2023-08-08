//https://www.codingninjas.com/studio/problems/second-largest-element-in-the-array_873375


#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
   int max=-INT_MAX,secondmax=-INT_MAX;
   sort(arr.begin(),arr.end());
   for(int i = 0;i< n;i++){
       if(arr[i] > max){
           secondmax = max;
           max = arr[i];  
       }
   }
   if(secondmax == -INT_MAX){
       return -1;
   }
   else{
       return secondmax;
   }
   return 0;
}
