import java.util.Scanner;

class find_greater{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter A: ");
        int a = sc.nextInt();
        System.out.print("Enter B: ");
        int b = sc.nextInt();
        if(a>b){
            System.out.println(a);
        }else{
            System.out.println(b);
        }
    }
}