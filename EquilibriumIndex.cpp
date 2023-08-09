https://www.codingninjas.com/studio/problems/equilibrium-index_893014

#include <bits/stdc++.h> 
using namespace std;
int findEquilibriumIndex(vector<int> &arr){
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        sum += arr[i];
    }
    int newsum = 0;
    for(int i = 0;i<arr.size();i++){
        if(newsum == (sum - newsum - arr[i])){
            return i;
        }
        else{
            newsum += arr[i];
        }
    }
return -1;
}
