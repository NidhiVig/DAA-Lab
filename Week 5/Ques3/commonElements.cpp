#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void printCommon(vector<int> v1,vector<int> v2,int n,int m){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[v1[i]]=1;
    for(int i=0;i<m;i++){
        if(mp[v2[i]]==1)
            mp[v2[i]]=2;
    }
    for(auto it: mp){
        if(it.second==2)
            cout<<it.first<<" ";
    }
}
int main(){
    int n,m;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
        cin>>v1[i];
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++)
        cin>>v2[i];
    printCommon(v1,v2,n,m);
    return 0;
}