#include<stdio.h>
int main(){
    int a=3;
    int *p=NULL;
    p=&a; 
    //*p=2;
    printf("%d",*p);

    return 0;
}
/*
int main() {
   int a = 7, b ;
   int *p; // Un-initialized Pointer
   p = &a; // Stores address of a in ptr
   b = *p; // Put Value at ptr in b
}
*/