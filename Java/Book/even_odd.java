import java.util.Scanner;
public class even_odd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();
        if(n%2==0){
            System.out.println("Even Number "+n);
        }else{
            System.out.println("Odd Number "+n);
        }
    }

}
