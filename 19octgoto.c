#include<stdio.h>
int main(){
    int a=1,b=20;
    tag:
    if(a<20){
        printf("%d",a);
        a=a+1;
    }
    goto tag ;



}