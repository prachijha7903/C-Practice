#include<stdio.h>
int main(){
    int i,j,n,m,nst,nsp;
    printf("Enter i and j: ");
    scanf("%d %d",&i,&j);
    nst=1;
    nsp=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=nst;j++){
            printf("*");
            nst++;
        }
        for(j=1;j<=nsp;j++){
            printf(" ");
            nsp++;
        }
        printf("\n");
    }


    return 0;
}