#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={23,5,3,6,4,3,6};
    replace(arr.begin(),arr.end(),3,10);// replaces all 3's to 10's
    for(auto el:arr){
        cout<<el<<" ";
    }
    cout<<"\n";
    // [23,5,10,6,4,10,6]
    rotate(arr.begin(),arr.begin()+2,arr.end());
    for(auto el:arr){
        cout<<el<<" ";
    }
    // rotate in anticlockwise
    cout<<"\n";
    return 0;
}