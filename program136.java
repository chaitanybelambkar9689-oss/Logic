/*
   iRow = 4 ,iCol:=4
   output = A  B  C D 
            A  B  C D
            A  B  C D
            A  B  C D
            
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {
        int i = 0;
        int j = 0;
        int iCount = 0;

        for(i = j;i <= iCol;i++)
        {
            char ch = 'A';
            for(j = 1; j <= iCol;j++)
            {
                System.out.print(ch+" \t");
                ch++;
                
            }
            System.out.println();
        }
    }
}
class program136
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