#include<stdio.h>       
int main(){
    int x;
    printf("enter an integer : ");
    scanf("%d",&x);
    // typecasting
    float f = (float)x;
    printf("%f",f/2);
}