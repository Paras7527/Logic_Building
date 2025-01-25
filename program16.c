/*
    Start
    Accept the percentage from user
    If percentage are less than 40 display FAIL
    and if percentage greater than or equal to 40 display pass

    Stop
*/
#include<stdio.h>
void DisplayResult(float fPercentage){
    if (fPercentage>=40.00f)
    {
        printf("You are pass\n");
    }
    else{
        printf("You are fail\n");
    }
}

int main(){
    float fValue=0.0f;

    printf("Enter Percentage:");
    scanf("%f",&fValue);

    DisplayResult(fValue);
    return 0;
}