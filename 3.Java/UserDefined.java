import java.util.*;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);

    }
}

class UserDefined 
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Age : ");
        int iAge = sobj.nextInt();

        try
        {
            if(iAge < 18 )
            {
                //throw new AgeInvalid("Your Age is below 18");
                AgeInvalid aobj = new AgeInvalid("Below 18");
                throw aobj;
            }
            else
            {
                System.out.println("Login Successful...");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch Bolck");
            System.out.println(obj);
        }
    }
    
}
