using System;

public class Asymptote {
    public static void Main(string[] args) {
        double p, n, u;

        Console.WriteLine("\"p\" value: ");
        p = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("\"n\" value: ");
        n = Convert.ToInt32(Console.ReadLine());
        u = (2 * n + 3) / (n + 1);

        while (Math.Abs(u - 2) >= Math.Pow(10, -p))
        {
            n++;
            u = (2 * n + 3) / (n + 1);
        }

        Console.WriteLine(n);
    }
}