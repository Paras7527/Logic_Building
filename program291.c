#include<stdio.h>

void Display(int Arr[],int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int Brr[]={10,20,30,40,50};

    Display(Brr,5);

    return 0;
}