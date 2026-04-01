import java.util.Scanner;

public class Fibonacci_series {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter nth position in the series: ");
        int n = input.nextInt();
        int a = 0;
        int c = 1;
        int count = 2;
        while (count <= n){
            int temp = c;
            c = c + a;
            a = temp;
            count++;
        }
        System.out.println("In nth position of Fibonacci series is: " + c);
    }
}
