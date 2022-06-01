#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int size;
        cin>>size;
        for (int j=0;j<size;j++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int target;
        cin>>target;
        int l=0,r=size-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(v[mid]==target){
                cout<<"Present "<<mid+1<<endl;
                break;
            }
            else if(v[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        // int l=0;
        // int r=sizee-1;
        // int counter=0;
        // int mid=(r-l)/2;
        // int flag=1;
        // while(l<r)
        // {
        //     if (n[mid]==target)
        //     {
        //         counter+=1;
        //         flag=-1;
        //         cout<<"Present "<<counter<<endl;
        //         break;
        //     }
        //     else if (n[mid]>target)
        //     {
        //         counter+=1;
        //         r=mid-1;
        //         mid=l+(r-l)/2;
        //     }
        //     else
        //     {
        //         counter+=1;
        //         l=mid+1;
        //         mid = l+(r-l)/2;
        //     }
        // }
        // if (flag==1)
        //     cout<<"Not present"<<counter<<endl;
    }
    return 0;
}

