/*
    Start
    Accept the percentage from user
    If percentage are less than 40 display FAIL
    and if percentage greater than or equal to 40 display pass

    Stop
*/
#include<stdio.h>
void DisplayResult(float fPercentage){
    if(fPercentage<0.0f || fPercentage >100.0f)
    {
        printf("Invalid Percentage.Please Enter In The Range 0 To 100\n");
    return;
    }
    if (fPercentage>=40.00f)
    {
        printf("You are pass\n");
    }
    else
    {
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


/*
(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % gcc program18.c -o MY
(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./MY                 
Enter Percentage:60
You are pass
(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./MY                 
Enter Percentage:39.0
You are fail
(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./MY
Enter Percentage:-9.8
Invalid Percentage.Please Enter In The Range 0 To 100
(base) parasshivprasadkulkarni@Parass-MacBook-Air LB % ./MY
Enter Percentage:101.98
Invalid Percentage.Please Enter In The Range 0 To 100*/
