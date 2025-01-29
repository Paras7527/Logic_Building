//Row=4
//Col=4
/*      *   *   *
        *   *   *
        *   *   *
        *   *   *
*/
#include<stdio.h>
void Display()
{
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");    
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");
    
    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    
}
int main()
{
    int iValue1=0;
    printf("Enter Number :");
    scanf("%d",&iValue1);

    Display();
    return 0;
}