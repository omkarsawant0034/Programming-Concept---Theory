import java.io.*;

public class CreateFile 
{
    public static void main(String Args[]) throws Exception
    {
        File fobj =  new File("PPA.txt");
        fobj.createNewFile();
    }    
}
