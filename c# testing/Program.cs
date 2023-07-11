class Program
{
    public static void Main(string[] args)
    {
        int a = 5;
        change(ref a);
        Console.WriteLine(a);
    }

    public static void change(ref int a)
    {
        ref int b=ref a;
        b=0;
    }
}