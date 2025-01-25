#include<stdio.h>
int main(){
    float fRadius=0.0f;
    float fArea=0.0;

    printf("Enter radius of a circle:");
    scanf("%f",&fRadius);

    fArea=3.14f * fRadius * fRadius;

    printf("Area of circle is:%f",fArea);
    return 0;
}