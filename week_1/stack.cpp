#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(30);
    st.push(70);
    st.pop();
    // printing
    stack<int> temp;
    while(st.size()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
    cout<<"\n";
    return 0;
}