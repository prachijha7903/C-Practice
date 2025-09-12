#include<stdio.h>
int main(){
    int n,fact;
    printf("Enter the no. : ");
    scanf("%d",&n);
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}