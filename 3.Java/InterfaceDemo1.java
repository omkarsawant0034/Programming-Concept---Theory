
interface Circle
{
    float Pi = 3.14f;

    public float Area (float Radius);
    public float Circumfurance(float Radius);
}

class PPA implements Circle
{
    public float Area(float Radius)
    {
            return Pi*Radius*Radius;
    }  
    public float Circumfurance(float Radius)
    {
            return 2* Pi*Radius;
    }  
}



public class InterfaceDemo1 {
    public static void main(String Args[])
    {
            PPA pobj = new PPA();


            System.out.println("Value of Pi is :"+Circle.Pi);
            
            //Circle.Pi = 6.15; //final 
            
            float fRet = pobj.Area(10.7f);
            System.out.println("Area is "+fRet);
            
            float fRet1 = pobj.Circumfurance(10.7f);
            System.out.println("Area is "+fRet1);
    }
}