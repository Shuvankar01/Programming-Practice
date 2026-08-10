import java.util.Scanner;

public class TryCatchExample {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter first number: ");
            int first = scanner.nextInt();

            System.out.print("Enter second number: ");
            int second = scanner.nextInt();

            int result = first / second;

            System.out.println("Result = " + result);

        } catch (ArithmeticException e) {

            System.out.println(
                    "Error: Cannot divide by zero."
            );

        } catch (Exception e) {

            System.out.println(
                    "Error: Invalid input."
            );

        } finally {

            scanner.close();
        }
    }
}