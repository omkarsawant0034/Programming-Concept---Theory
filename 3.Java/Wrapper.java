public class Wrapper 
{
    public static void main(String Args [])
    {
        int no = 11;
        Integer Iobj = no;  //Boxing
        
        System.out.println((no));
        System.out.println((Iobj));

        int i = Iobj; //Unboxing
        System.out.println(i);
    }    
}
