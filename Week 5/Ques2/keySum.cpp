#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findPair(vector<int> vec,int n,int key){
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    bool flag=false;
    while(i<j){
        if(vec[i]+vec[j]==key){
            cout<<vec[i]<<" "<<vec[j]<<"  ";
            j--;
            i++;
            flag=true;
        }
        else if(vec[i]+vec[j]<key)
            i++;
        else
            j--;
    }
    if(!flag){
        cout<<"\nNo such pair exist.\n";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        cin>>key;
        findPair(vec,n,key);
    }
    return 0;
}