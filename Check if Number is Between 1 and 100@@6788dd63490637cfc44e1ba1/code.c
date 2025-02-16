#include<stdio.h>
int main(){
    int a = 50;
    scanf("%d",&a);
    if(1<=a || a>=100){
        printf("In Range\n");
    }
    else{
        printf("Out of Range\n");
    }
    return 0;
}