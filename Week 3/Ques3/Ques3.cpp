#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
bool duplicates(vector<int> v,int n){
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
        if(v[i]==v[i+1]) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(duplicates(v,n))
            cout<<"YES\n";
        else
            cout<<"NO";
    }
}