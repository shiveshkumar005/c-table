#include<stdio.h>
int main(){
    int a=7,b=5;
    switch (a)
    {
    case 7:
        printf("outer loop\n");
        switch (b)
        {
        case 5:
            printf("inner loop");
            break;
    }


}
}