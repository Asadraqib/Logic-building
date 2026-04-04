import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.print("Enter Operator (+, -, *, /, %, X to Exit): ");
            char op = input.next().trim().charAt(0);

            if (op == 'x' || op == 'X') {
                System.out.println("-----Thanks for Using Calculator-----");
                break;
            }

            System.out.print("Enter 1st num: ");
            int first = input.nextInt();

            System.out.print("Enter 2nd num: ");
            int second = input.nextInt();

            int ans = 0;

            if (op == '+') {
                ans = first + second;
            }
            else if (op == '-') {
                ans = first - second;
            }
            else if (op == '*') {
                ans = first * second;
            }
            else if (op == '/') {
                if (second == 0) {
                    System.out.println("Cannot divide by zero!");
                    continue;
                }
                ans = first / second;
            }
            else if (op == '%') {
                if (second == 0) {
                    System.out.println("Cannot modulo by zero!");
                    continue;
                }
                ans = first % second;
            }
            else {
                System.out.println("*****Enter valid operator*****");
                continue;
            }

            System.out.println(first + " " + op + " " + second + " = " + ans);
        }

        input.close();
    }
}
