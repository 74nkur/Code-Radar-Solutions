#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=="+"){
        printf("Addition: %d\n",a+b);
    }
    else if(c=="-"){
        printf("Subtraction: %d\n",a-b);
    }
    else if(c=="*"){
        printf("Multiplication: %d\n", a*b);
    }
    else if(c=="/"){
        printf("Division: %d\n",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}