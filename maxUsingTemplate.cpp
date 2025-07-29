#include<iostream>
#include<cstring>
using namespace std;

template<class T>
T Max(T x,T y){
    return x>y?x:y;
}

// template specialization
template<>
char *Max<char*>(char* a,char* b){
    return strcmp(a,b)>0?a:b;
}

int main(){
    int a=10,b=20;
    cout<<Max<int>(a,b)<<endl;
    char *c="Suryansh";
    char *d="Saurabh";
    cout<<Max<char*>(c,d)<<endl;
    return 0;
}