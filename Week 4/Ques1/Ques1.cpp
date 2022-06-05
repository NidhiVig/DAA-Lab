#include<iostream>
using namespace std;
int merge(int arr[],int l,int mid,int r,int &c){
    int n1=mid-l+1,n2=r-mid;
    int ar1[n1],ar2[n2];
    for(int i=0;i<n1;i++)
        ar1[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        ar2[i]=arr[mid+i+1];
    int i=0,j=0,k=l,inv=0;
    while(i<n1&&j<n2){
        c++;
        if(ar1[i]<=ar2[j])
            arr[k++]=ar1[i++];
        else {
            arr[k++]=ar2[j++];
            inv+=(n1-i);
        }
    }
    while(i<n1)
        arr[k++]=ar1[i++];
    while(j<n2)
        arr[k++]=ar2[j++];
    return inv;
}
int mergeSort(int arr[],int l,int r,int &c){
    if(l>=r) return 0;
    int mid=l+(r-l)/2;
    int inv=0;
    inv+=mergeSort(arr,l,mid,c);
    inv+=mergeSort(arr,mid+1,r,c);
    inv+=merge(arr,l,mid,r,c);
    return inv;
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
        int c=0;
        int inv=mergeSort(arr,0,n-1,c);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\nComparisons: "<<c<<endl;
        cout<<"Inversions: "<<inv<<endl;
    }
}