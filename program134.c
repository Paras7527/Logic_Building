//Row=4     Col=4
/*     
        a   b   c   d
        a   b   c   d
        a   b   c   d
        a   b   c   d
          

*/
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch='a';

    for(i=1;i<=iRow;i++)              //Outer(Rows)
    {
        for (j=1,ch='a';j<=iCol;j++)         //Inner(Columns)
        {
            printf("%c\t",ch);
            ch++;
            
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