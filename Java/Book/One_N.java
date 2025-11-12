import java.util.Scanner;

public class One_N {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter N:");
        int n = sc.nextInt();
        int i =1;
        while(i<=n){
            if(i%2==0){
                System.out.println(i);
            }
            i++;
        }
    }
}
