#include<stdio.h>

int BinarySearch(int a[],int x);
int SelectionSort(int a[],int x);
int main(){
    int a[11]={1,2,3,4,5,6,7,8,9,10,11};
    printf("%d",BinarySearch(a,10));
    printf("\n%d",SelectionSort(a,3));
    return 0;
}
int BinarySearch(int a[],int x){
    int i=0,j=11;
    int mid=0;
    
    while(i!=j){
        mid=(i+j)/2;
        if(a[mid]==x){
            return mid;
        }
        else{
            if(a[mid]>x){
                j=mid;
            }
            else{
                if(a[mid]<x){
                    i=mid;
                }
            }
        }
        
    }
    return -1;
}
int SelectionSort(int a[],int x){
    int i;
    for(i=0;i<11;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
