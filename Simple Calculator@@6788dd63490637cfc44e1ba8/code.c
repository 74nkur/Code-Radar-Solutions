#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%f %f",&a,&b);
    scanf("%s",&c)
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