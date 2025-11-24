/*
   iRow = 3,iCol:=4
   output =
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16

            
            
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {
        int i = 0;
        int j = 0;
      

        for(i = 1;i <= iRow;i++)
        {
          
           for(j = 1; j <= iCol;j++)
            {
                if((i+j) != (iCol+1))
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print(iCol+"\t");
                }

            }
           
            System.out.println();
        }
    }
}
class program145
{
    public static void main(String A[])
    {
        int iValue1 = 0,iValue2 = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the  no of elements of row :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the  no of elements of columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);


    }
}