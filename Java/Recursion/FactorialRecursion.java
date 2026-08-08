import java.util.Scanner;

public class FactorialRecursion {

    public static long factorial(int n) {

        if (n < 0) {
            throw new IllegalArgumentException(
                    "Factorial is not defined for negative numbers."
            );
        }

        if (n == 0 || n == 1) {
            return 1;
        }

        return n * factorial(n - 1);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a non-negative integer: ");
        int n = scanner.nextInt();

        try {
            System.out.println("Factorial = " + factorial(n));
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }

        scanner.close();
    }
}