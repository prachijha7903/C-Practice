#include<stdio.h>
int main(){
    //print 0 to n;
    int i,n;
    n=5;
    i=1;
    do{
        printf("%d ",i);
        i++;
    }
    while(i<=n);
    return 0;
}