https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?leftPanelTab=1

#include <bits/stdc++.h> 

#include<array>

void sort012(int *arr, int n)

{

   vector<int>temp;

   int index=0;

   int i=0;

   while(i<n)

   {

      if(arr[i]==0)

      {

         temp.push_back(arr[i]);

      }

      i++;

   }

   i=0;

   while(i<n)

   {

      if(arr[i]==1)

      {

         temp.push_back(arr[i]);

      }

      i++;

   }

   i=0;

   while(i<n)

   {

      if(arr[i]==2)

      {

         temp.push_back(arr[i]);

      }

      i++;

   }

   for(int i=0;i<n;i++)

   {

      arr[i]=temp[i];

   }

}

