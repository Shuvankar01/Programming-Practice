import java.util.Scanner;

public class GCDRecursion {

    public static int gcd(int a, int b) {

        a = Math.abs(a);
        b = Math.abs(b);

        if (b == 0) {
            return a;
        }

        return gcd(b, a % b);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int a = scanner.nextInt();

        System.out.print("Enter second number: ");
        int b = scanner.nextInt();

        if (a == 0 && b == 0) {
            System.out.println(
                    "GCD is undefined for 0 and 0."
            );
        } else {
            System.out.println(
                    "GCD = " + gcd(a, b)
            );
        }

        scanner.close();
    }
}