#include<stdio.h>
void printTable(int n);

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printTable(n);

    return 0;
}
void printTable(int n){
    int i,a;
    a=1;
    for(i=n;i<=n*10;i=i+n){
        printf("%d*%d=%d\n",n,a,i);
        a++;
 }
}