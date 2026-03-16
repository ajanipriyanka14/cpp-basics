class Demo
{
    void show()
    {
        System.out.println("Hello from method");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Demo d = new Demo();   // object reference

        d.show();   // method call using reference
    }
}
