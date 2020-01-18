package asymptote;

import java.util.Scanner;

public class asymptote {
    public static void main(String[] args) {
        double p, u = 3, n = 0;
        
        Scanner pvalue = new Scanner(System.in);
        System.out.println("\"p\" value: ");
        String pv = pvalue.nextLine();

        p = Double.parseDouble(pv);		
        while (Math.abs(u - 2) >= Math.pow(10, -p)) {
            n = n + 1;
            u = (2 * n + 3) / (n + 1);
        }

        System.out.println(n);
    }
}