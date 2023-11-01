#include<stdio.h>
int main(){
    int num;
    printf("enter a number which table you want\n");
    scanf("%d",&num);
    for (int i = 0; i <=9; i++)
    {
        printf("%dx%d=%d\n",num,i+1,(i+1)*num);
    
    }
    
    return 0;
}
