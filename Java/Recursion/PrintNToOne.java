import java.util.Scanner;

public class PrintNToOne {

    public static void printNumbers(int n) {

        if (n < 1) {
            return;
        }

        System.out.print(n + " ");

        printNumbers(n - 1);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter n: ");
        int n = scanner.nextInt();

        if (n < 1) {
            System.out.println("n must be at least 1.");
        } else {
            System.out.println("Numbers from " + n + " to 1:");
            printNumbers(n);
        }

        scanner.close();
    }
}