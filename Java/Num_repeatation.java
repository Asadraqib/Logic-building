import java.util.Scanner;

public class Num_repeatation {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter numbers: ");
        int num = input.nextInt();
        System.out.print("Enter number to find its occurrence: ");
        int n = input.nextInt();
        int rem,count=0;
        while (num > 0){
            rem = num % 10;
            if (rem == n){
                count++;
            }
            num = num / 10;
        }
        System.out.print("Number "+ n +" occured "+ count +" times");
    }
}

