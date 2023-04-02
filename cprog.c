#include<stdio.h>
int main(){
    float f;
    printf("enter temp in fahreinheit");
    scanf("%f",&f);
    float c=(f-32)/1.8;
    printf("the temp in celcius %f",c);
    return 0;
}