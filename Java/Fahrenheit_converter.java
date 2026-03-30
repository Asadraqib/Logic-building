import java.util.Scanner;

public class Fahrenheit_converter {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Celcius to convert: ");
        float celcius = input.nextFloat();
        float fahrenheit = celcius * 9/5 + 32;
        System.out.println(celcius + " Celcius = " + fahrenheit +" Fahrenheit");
    }
}
