/*
   iRow = 4,iCol:=4
   output =
1       2       3       4
1               3       4
1       2               4
1       2       3       4

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
             if((i==1)||(i==iCol)||(j==1)||(j==iRow)||((i+j)==(iCol+1)))
             {
                System.out.print(j+"\t");
             }
             else
             {
                System.out.print("\t");
             }
            }
           
            System.out.println();
        }
    }
}
class program160
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