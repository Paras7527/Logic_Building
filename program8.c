#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
// Function Name :  Addition
// Description   :  It is used to perform addition of two float values
// Input         :  Float,Float
// Output        :  Float
// Author        :  Paras Shivprasad Kulkarni  (MC0092)
// Date          :  06/10/2024
//
////////////////////////////////////////////////////////////////////////

float Addition(float fValue1,float fValue2)
{
    float fAdd=0.0f;                        //Local Variable for result
    fAdd=fValue1+fValue2;                   //Business logic
    return fAdd;
}

////////////////////////////////////////////////////////////////////////
//
//This Application is used to perform addition of 2 numbers
//
////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;    //Local Varisable for input        

    printf("Enter first number:");
    scanf("%f",&fNo1);

    printf("Enter second number:");
    scanf("%f",&fNo2);   

    fAns=Addition(fNo1,fNo2);               //Function call

    printf("Addition is:%f",fAns);

    return 0;
}