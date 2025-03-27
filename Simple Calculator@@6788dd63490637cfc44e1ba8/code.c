#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%c",&c);
    scanf("%f",&b);
    if(c == '+'){
        printf("%f\n",a+b);
    }
    else if(c == '-'){
        printf("%f\n",a-b);
    }
    else if(c == '*'){
        printf("%f\n", a*b);
    }
    else if(c == '/'){
        printf("%f\n",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}