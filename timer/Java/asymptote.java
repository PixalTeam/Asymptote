package asymptote;

import java.sql.Timestamp;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class asymptote {
    public static void main(String[] args) {
        double p, n;
        
        Scanner pvalue = new Scanner(System.in);
        System.out.println("\"p\" value: ");
        String pv = pvalue.nextLine();

        p = Double.parseDouble(pv);	


        Scanner nvalue = new Scanner(System.in);
        System.out.println("\"n\" value: ");
        String nv = nvalue.nextLine();
        
        n = Double.parseDouble(nv);	
        
        Timestamp timestamp = new Timestamp(System.currentTimeMillis());
        double date1 = timestamp.getTime();
        
        double u = (2 * n + 3) / (n + 1);
        
        while (Math.abs(u - 2) >= Math.pow(10, -p)) {
            n = n + 1;
            u = (2 * n + 3) / (n + 1);
            
        }
        System.out.println(n);
        
        Timestamp timestamp2 = new Timestamp(System.currentTimeMillis());
        double date2 = timestamp2.getTime();
        double date = date2 - date1;
        System.out.println(date + "ms");
    }
}