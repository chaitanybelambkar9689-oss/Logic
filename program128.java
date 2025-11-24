/*
Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
 */
import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;
    
        for(iCnt =1 ;iCnt <= iNo;iCnt++)
        {
            System.out.print(iCnt+"  *\t");
            iCount++;
        
        }
        System.out.println();
    }
}
class program128
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}