/*
   iRow = 4,iCol:=4
   output =
*
*       *
*       *       *
*       *       *       *

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
            if(iRow != iCol)
            {
                System.out.print("Invalid");
                return;
            }
          
           for(j = 1; j <= iCol;j++)
            {
             if(i >= j)
             {
                System.out.print("*\t");
             }
            }
           
            System.out.println();
        }
    }
}
class program151
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