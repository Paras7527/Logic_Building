//Row=4     Col=4
/*     
        *   *   *   *
        &   &   &   &       
        &   &   &   &    
        *   *   *   *  
*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i=1;i<=iRow;i++)              //Outer(Rows)
    {
        for (j=1;j<=iCol;j++)         //Inner(Columns)
        {
            if(i==1 || i==iRow)       //First and last rows
            {
                printf("*\t");
            }
            else
            {
                printf("&\t");
            }
     
        }
        printf("\n");
    }

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}