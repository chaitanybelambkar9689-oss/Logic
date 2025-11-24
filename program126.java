import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        ch = 'A';
        for(iCnt = 1;iCnt <= iNo;iCnt++)
        {
            System.out.print(ch+" \t");
            ch++;
        }
    }
}
class program126
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