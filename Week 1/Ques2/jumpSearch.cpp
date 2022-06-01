#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>
using namespace std;

int jump(vector<int>& nums, int len, int key)
{
     int x = sqrt(len);
     int step = x;
     
     int prev = 0;
     
     while(nums[ min(x,len)-1 ] < key)
     {
          prev = x;
          x += step;
          if(prev == len)
               return -1;
     }
     while(nums[prev] < key){
          prev++;
          if(prev == min(len, x))
               return -1;
     }
     
     if(nums[prev] == key)
          return prev;
     
     return -1;
}

int main()
{
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<int> nums(n);
          for(int i=0; i<n; i++)
               cin>>nums[i];
          int key;
          cin>>key;
          int index = jump(nums, n, key);
          
          if(index != -1)
               cout<<"Present "<<index+1<<endl;
          else
               cout<<"Not Present "<<n<<endl;
     }
     return 0;
}