#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%c",&c);
    scanf("%f %f",&a,&b);
    if(c == '+'){
        printf("%2f",a+b);
    }
    else if(c == '-'){
        printf("%2f",a-b);
    }
    else if(c == '*'){
        printf("%2f", a*b);
    }
    else if(c == '/'){
        printf("%2f",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}