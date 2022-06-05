#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void findMax(vector<char> v,int &occ, char &c){
    vector<int> vec(250,0);
    int maximum=INT_MIN;
    for(int i=0;i<v.size();i++){
        vec[v[i]]++;
        if(vec[v[i]]>maximum){
            maximum=vec[v[i]];
            c=v[i];
        }
    }
    occ=maximum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int occ;
        char c;
        findMax(v,occ,c);
        if(occ<=1) cout<<"No duplicate found.";
        else cout<<c<<"-"<<occ;
        cout<<endl;
    }
}