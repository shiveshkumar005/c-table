#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("value of a,b,c are :");
    scanf("%d%d%d",&a,&b,&c);
    printf("inter operation:");
    scanf("%c",&op);
    switch (op)
    {
    case '+':
        printf("sum is:%d",a+b+c);
        break;
    case'-':
       printf("difference is:%d",a-b-c);
       break;
    default:
        printf("this is sum or difference");
        break;
    }
return 0;

}