class Main {
    public static void main(String[] args) {
        int age = 19;

        if (age > 50) {
            System.out.println("Only adult can give the vote..");
        } else if (age < 18) {
            System.out.println("You are a child. You can't vote.");
        } else {
            System.out.println("Yeah! You can vote.");
        }
    }
}