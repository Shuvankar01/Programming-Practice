import java.util.Scanner;

public class SumOfDigits {

    public static int sumOfDigits(int n) {

        n = Math.abs(n);

        if (n < 10) {
            return n;
        }

        return (n % 10) + sumOfDigits(n / 10);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int number = scanner.nextInt();

        System.out.println(
                "Sum of Digits = " + sumOfDigits(number)
        );

        scanner.close();
    }
}