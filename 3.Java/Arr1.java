import java.util.Scanner;

class Arrs1 
{
    public static void main (String Args[])
    {
        //1 Static
        int Arr1[] = {11,21,51,101};
       
        //2 Dynamic 
        int Arr2[] = new int[4];
        Arr2[0] = 11;
        Arr2[1] = 21;
        Arr2[2] = 51;
        Arr2[3] = 101;

        System.out.println("Length of Array is :" +Arr1.length);

        System.out.println("Enter 4 Elements :");

        for(int Icnt = 1; Icnt <= 4 ; Icnt++)
        {

        }
        
        for(int iCnt = 0 ; iCnt < Arr1.length ; iCnt++)
        {
            System.out.println(Arr1[iCnt]);
        }
    }    
}
