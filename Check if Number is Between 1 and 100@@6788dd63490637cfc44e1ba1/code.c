#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(0<a || a>101){
        printf("In Range\n");
    }
    else{
        printf("Out of Range\n");
    }
    return 0;
}