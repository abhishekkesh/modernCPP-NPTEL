#include<bits/stdc++.h>
using namespace std;

int comparator(int a,int b){
    return a<b;
}
int main(){
    int arr[]={4,2,1,0,3,4,10,9};
    const int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,comparator);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}