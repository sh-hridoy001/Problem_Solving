import java.util.Scanner;

public class quardratic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter A: ");
        double a = sc.nextDouble();
        System.out.print("Enter B: ");
        double b = sc.nextDouble();
        System.out.print("Enter C: ");
        double c = sc.nextDouble();

        double d = (b * b) - (4 * a * c);
        if (d > 0) {
            double r1 = (-b + Math.sqrt(d)) / 2 * a;
            double r2 = (-b - Math.sqrt(d)) / 2 * a;
            System.out.println("Roots are"+r1+" "+r2);
        }else if(d==0){
            double r =(-b/2*a);
            System.out.println(r);
        }else{
            System.out.println("Roots are impossible");
        }
    }
}
