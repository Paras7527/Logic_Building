//Problems On matrix...
import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow, int iCol)
    {
        Arr=new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Please enter The Values:");

        Scanner sobj=new Scanner(System.in);
        int i=0,j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are:");
        int i=0,j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int iSum=0,i=0,j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                iSum=iSum+Arr[i][j];
            }
        }
        return iSum;
    }

    public int CountEven()
    {
        int iCount=0,i=0,j=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j]%2)==0)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }

    public int SumEven()
    {
        int iSum=0,i=0,j=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j]%2)==0)
                {
                    iSum=iSum+Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public void DigitsCount()
    {
        int iNo=0,iCount=0,i=0,j=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                iNo=Arr[i][j];
                while(iNo!=0)
                {
                    iCount++;
                    iNo=iNo/10;
                }
                System.out.println("Number of Digits of  "+Arr[i][j]+"  is :"+iCount);
                iCount=0;
            }
        }
    }

    public void DigitsAdd()
    {
        int iNo=0,iSum=0,i=0,j=0,iDigit=0;
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                iNo=Arr[i][j];
                while(iNo!=0)
                {
                    iDigit=iNo%10;
                    iSum=iSum+iDigit;
                    iNo=iNo/10;
                }
                System.out.println("Sum of Digits in  "+Arr[i][j]+"  is :"+iSum);
                iSum=0;
            }
        }
    }

    public int Maximum()
    {
        int iMax=0,i=0,j=0;
        iMax=Arr[0][0];
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j])>iMax)
                {
                    iMax=Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int iMin=0,i=0,j=0;
        iMin=Arr[0][0];
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if((Arr[i][j])<iMin)
                {
                    iMin=Arr[i][j];
                }
            }
        }
        return iMin;
    }
}

class program581
{
    public static void main(String A[])
    {
        int iRow=0,iCol=0,iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Please Enter Number of Rows:");
        iRow=sobj.nextInt();

        System.out.println("Please Enter the Number of Columns");
        iCol=sobj.nextInt();

        Matrix mobj=new Matrix(iRow, iCol);

        mobj.Accept();

        mobj.Display();

        iRet=mobj.Summation();
        System.out.println("Summation of all elements is:"+iRet);

        iRet=mobj.CountEven();
        System.out.println("Even elements in the Matrix:"+iRet);

        iRet=mobj.SumEven();
        System.out.println("Addition of Even elements in the Matrix:"+iRet);

        mobj.DigitsCount();

        mobj.DigitsAdd();

        iRet=mobj.Maximum();
        System.out.println("Maximum element in the Matrix:"+iRet);

        iRet=mobj.Minimum();
        System.out.println("Minimum element in the Matrix:"+iRet);
    }
}