#include<iostream>
#include<algorithm>
using namespace std;
void selection(int arr[],int n){
    int s=0,c=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min=j;
            c++;
        }
        swap(arr[min],arr[i]);
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparisons: "<<c<<endl;
    cout<<"Swaps: "<<s<<endl;
    cout<<endl;
}
int main(){
    int n,i,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        selection(arr,n);
    }
    return 0;
}