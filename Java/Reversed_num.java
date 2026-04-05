import java.util.Scanner;

public class Reversed_num {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter numbers: ");
        int num = input.nextInt();
        int rem,rev=0;
        while (num > 0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        System.out.print("Reversed number is: " + rev);
    }
}

