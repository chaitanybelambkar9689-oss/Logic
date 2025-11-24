/*
   iRow = 4 ,iCol:=5
   output = 4 4 4 4 4
            3 3 3 3 3
            2 2 2 2 2 
            1 1 1 1 1  
            
            
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {
        int i = 0;
        int j = 0;
        int iCount = 0;

        for(i = iRow;i >= 1;i--)
        {
            
            for(j = 1; j <= iCol;j++)
            {
                System.out.print(i+" \t");
                iCount++;
            }
           
            System.out.println();
        }
    }
}
class program139
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