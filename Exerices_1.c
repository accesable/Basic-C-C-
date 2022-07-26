#include<stdio.h>

int main(){
    int a,b;
    a=4;
    b=4;
    printf("The Sum is = %d",Sumof(a,b));
    return 0;
}
/*Write a C program to compute the sum of the two given integer values.
 If the two values are the same, then return triple their sum */
int Sumof(int a,int b){
    if(a==b){
        return (a+b)*3;
    }
    return a+b;
}
