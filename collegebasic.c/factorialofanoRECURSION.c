#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("THe value of factorial of %d is %d",n,fact(n));

    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factorial;
    fact(n-1);
    factorial = fact(n-1)*n;
    return factorial;

}