#include<stdio.h>
int main() {
    int a,b,x;
    printf("Enter thr values of a and b:");
    scanf("%d %d",&a,&b);
    x=(a>b)?a:b;
    printf("The bigger value is:%d",x);
    return 0;
}