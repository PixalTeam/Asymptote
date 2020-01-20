using System;

public class Asymptote
{
    public static void Main(string[] args)
    {
        double p, n, u;

        Console.WriteLine("\"p\" value: ");
        p = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("\"n\" value: ");
        n = Convert.ToInt32(Console.ReadLine());

        double timeStampFirst = GetTimestamp(DateTime.Now);

        u = (2 * n + 3) / (n + 1);

        while (Math.Abs(u - 2) >= Math.Pow(10, -p))
        {
            n++;
            u = (2 * n + 3) / (n + 1);
        }

        double timeStampSecond = GetTimestamp(DateTime.Now);

        Console.WriteLine(n);
        Console.WriteLine(timeStampSecond - timeStampFirst);
    }
}