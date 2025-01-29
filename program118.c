//Row=4
//Col=4
/*      #   #   #   # 
        #   #   #   # 
        #   #   #   # 
        #   #   #   # 
        
*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0;

    for(j=1;j<=iRow;j++)              //Outer(Rows)
    {
        for (i=1;i<=iCol;i++)         //Inner(Columns)
        {
            printf("#\t");
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