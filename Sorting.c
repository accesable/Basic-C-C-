#include<stdio.h>

int main(){
    int a[10]={42,52,31,27,59,36,83,24,15,91};
    int i,j;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        for(j=i+1;j<sizeof(a)/sizeof(a[0]);j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%d ,",a[i]);
    }

    return 0;
}

