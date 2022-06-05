#include<iostream>
#include<algorithm>
using namespace std;
int s=0;
int partition(int arr[],int l,int r,int &c,int &s){
    int pivot=arr[r];
    int j=l-1;
    for(int i=l;i<r;i++){
        c++;
        if(arr[i]<pivot){
            j++;
            swap(arr[i],arr[j]);
            s++;
        }
    }
    swap(arr[j+1],arr[r]);
    s++;
    return j+1;
}
void quickSort(int arr[],int l,int r,int &c,int &s){
    if(l<r){
        int pivot=partition(arr,l,r,c,s);
        quickSort(arr,l,pivot-1,c,s);
        quickSort(arr,pivot+1,r,c,s);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int c=0,s=0;
        quickSort(arr,0,n-1,c,s);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\nComparisons: "<<c<<endl;
        cout<<"Swaps: "<<s<<endl;
    }
}