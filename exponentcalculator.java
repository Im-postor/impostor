import java.lang.Math;
import java.util.*;
public class exponentcalculator {
    public static void exponentcalci(double x, double n) {
        double solution = Math.pow(x, n);
        System.out.println(solution);
        return;
        
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         double x = sc.nextDouble();
         double n = sc.nextDouble();
        exponentcalci(x, n);

        sc.close();
    }
    
    
}
