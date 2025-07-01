#include<stdio.h>
#include<stdlib.h>

int comparator(const void* a,const void* b){
    if(*(int*)a<*(int*)b) return -1;
    if(*(int*)a>*(int*)b) return 1;
    if(*(int*)a==*(int*)b) return 0;
}
int main(){
    int arr[]={0,1,2,4,5,6,7,8,9};
    int k=0;
    const int n=sizeof(arr)/sizeof(arr[0]);
    if(bsearch(&k,arr,n,sizeof(int),comparator)) printf("found");
    else printf("Not found");
    printf("\n");
    return 0;
}