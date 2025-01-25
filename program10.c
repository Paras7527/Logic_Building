/////////////////////////////////////////////////////////////////////////////////////
//
//        [IMPORTANT STEPS TO WRITE PROGRAM]
//        Step 1: Understand problem statement
//        Step 2: Write the Algorithm
//        Step 3: Decide the programming language
//        Step 4: Write the program
//        Step 5: Test the program
//
//
//        Problem Statement:
//        Write a program which is used to perform ADDITION of two numbers.
//
//        Step1:Understand the problem statement :
//        User is going to enter the data in decimal format.
//        If entered data is negative we have to convert it to positive value.
//
//        Step2:Write the algoritm:
//        START
//        Accept first input
//        Accept second input
//        If any of the input is negative convert it into postive
//        perform the addition of that accepted values
//        Display the addition
//        STOP
//
//        Step 3: Decide the programming language
//        According to the problem statement we select the C Programming Language.
//
//
//      Step 4: Write the program.
//
//      Step 5:Test the code.
//////////////////////////////////////////////////////////////////////////////////


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
    if ( fValue1<0.0f)
    {
        fValue1=-fValue1;
    }
    if ( fValue2<0.0f)
    {
        fValue2=-fValue2;
    }
    
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

/////////////////////////////////////////////////////////////
//
//(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./My                 
//
//TESTCASE 1:
//Enter first number:10.0
//Enter second number:20.0
//Addition is:30.000000%   
//
//TESTCASE 2:                                                                             (base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./My
//Enter first number:-10.0
//Enter second number:-20.0
//Addition is:30.000000%         
//
//TESTCASE3:                                                                       (base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./My
//Enter first number:10.0
//Enter second number:-20.0
//Addition is:30.000000%            
//
//TESTCASE 4:                                                                    (base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./My
//Enter first number:-10.0
//Enter second number:20.0
//Addition is:30.000000%                        
//      
//////////////////////////////////////////////////////////////////