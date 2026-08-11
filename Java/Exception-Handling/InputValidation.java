import java.util.InputMismatchException;
import java.util.Scanner;

public class InputValidation {

    public static int readPositiveInteger(
            Scanner scanner
    ) {

        while (true) {

            try {

                System.out.print(
                        "Enter a positive integer: "
                );

                int value = scanner.nextInt();

                if (value <= 0) {

                    System.out.println(
                            "Value must be greater than zero."
                    );

                    continue;
                }

                return value;

            } catch (InputMismatchException e) {

                System.out.println(
                        "Invalid input. Please enter an integer."
                );

                scanner.nextLine();
            }
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int number = readPositiveInteger(scanner);

        System.out.println(
                "Valid Number = " + number
        );

        scanner.close();
    }
}