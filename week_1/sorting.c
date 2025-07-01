#include<stdio.h>
#include<stdlib.h>

int comparator(const void* a,const void* b){
    return *(int*)a<*(int*)b;
}
int main(){
    int arr[]={4,2,1,0,3,4,10,9};
    const int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,n,sizeof(int),comparator);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}