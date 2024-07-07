
import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String Str)
    {
        super(Str);
    }
}

class userdefined1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Age : ");
        int Age = sobj.nextInt();

        try
        {
            if( Age < 18 )
            {
                AgeInvalid aobj = new AgeInvalid("Your Age is Below 18");
                throw aobj;
            }
            else
            {
                System.out.println("Logic Successful...");
            }
        }

        catch(AgeInvalid obj)
        {
            System.out.println("Inside a catch block");;
            System.out.print(obj);
        }



    }
}