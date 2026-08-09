import java.util.Scanner;

public class PrintOneToN {

    public static void printNumbers(int current, int n) {

        if (current > n) {
            return;
        }

        System.out.print(current + " ");

        printNumbers(current + 1, n);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = scanner.nextInt();

        if (n < 1) {
            System.out.println("n must be at least 1.");
        } else {
            System.out.println("Numbers from 1 to " + n + ":");
            printNumbers(1, n);
        }

        scanner.close();
    }
}