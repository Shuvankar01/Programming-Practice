import java.util.Scanner;

public class PowerRecursion {

    public static long power(long base, int exponent) {

        if (exponent < 0) {
            throw new IllegalArgumentException(
                    "Exponent must be non-negative."
            );
        }

        if (exponent == 0) {
            return 1;
        }

        return base * power(base, exponent - 1);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter base: ");
        long base = scanner.nextLong();

        System.out.print("Enter exponent: ");
        int exponent = scanner.nextInt();

        try {
            System.out.println(
                    "Result = " + power(base, exponent)
            );
        } catch (IllegalArgumentException e) {
            System.out.println("Error: " + e.getMessage());
        }

        scanner.close();
    }
}