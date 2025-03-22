/*
        Start
        Accept the total marks
        Acceot the obtained marks
        calculate the percentage as(Obtained/total)*100
        Display thee calculated percentage
        Stop
*/
#include<stdio.h>
float CalculatePercentage(int iObtained,int iTotal){
    float fPercentage=0;

    fPercentage=((float)iObtained/(float)iTotal)*100;

    return fPercentage;
}
int main(){
    int iValue1=0;
    int iValue2=0;
    float fResult=0;

    printf("Please enter obtained marks in yout exam:");
    scanf("%d",&iValue1);

    printf("Please enter the total marks:");
    scanf("%d",&iValue2);
    
    fResult=CalculatePercentage(iValue1,iValue2);

    printf("Your percentage is:%f",fResult);
    
    return 0;
}