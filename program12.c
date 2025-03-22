#include<stdio.h>
float CircleArea(float fRadius)
{
    float fArea=0.0;
    fArea=3.14f * fRadius * fRadius;
    return fArea;

}
int main(){
    float fValue=0.0f;
    float fResult=0.0f;


    printf("Enter radius of a circle:");
    scanf("%f",&fValue);

    fResult=CircleArea(fValue);
    printf("Area of circle is:%f",fResult);
    
    return 0;
}