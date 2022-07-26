#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int a[10]={42,52,31,27,59,36,83,24,15,91};
    int i,j;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        for(j=i+1;j<sizeof(a)/sizeof(a[0]);j++){
            if(a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d ,",a[i]);
    }

    return 0;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}

