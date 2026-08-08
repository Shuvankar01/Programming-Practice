import java.util.Scanner;

public class FibonacciRecursion {

    public static long fibonacci(int n) {

        if (n < 0) {
            throw new IllegalArgumentException(
                    "Position cannot be negative."
            );
        }

        if (n <= 1) {
            return n;
        }

        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of terms: ");
        int n = scanner.nextInt();

        if (n <= 0) {
            System.out.println("Number of terms must be positive.");
            scanner.close();
            return;
        }

        System.out.println("Fibonacci Sequence:");

        for (int i = 0; i < n; i++) {
            System.out.print(fibonacci(i) + " ");
        }

        scanner.close();
    }
}