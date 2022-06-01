#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, key;
        cin>>n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        cin>>key;
        int j;
        for(j = 0; j < n; j++) {
            if(v[j] == key) {
                cout<<"Present "<<j+1<<'\n';
                break;
            }
        }
        if(j == n) {
            cout<<"Not Present "<<j<<"\n";
        }
    }

}