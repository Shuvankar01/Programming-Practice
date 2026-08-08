import java.util.Scanner;

public class ReverseNumberRecursion {

    public static long reverseNumber(
            long number,
            long reversed
    ) {

        if (number == 0) {
            return reversed;
        }

        long digit = number % 10;

        return reverseNumber(
                number / 10,
                reversed * 10 + digit
        );
    }

    public static long reverse(long number) {

        boolean negative = number < 0;

        number = Math.abs(number);

        long reversed = reverseNumber(number, 0);

        return negative ? -reversed : reversed;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number: ");
        long number = scanner.nextLong();

        System.out.println(
                "Reversed Number = " + reverse(number)
        );

        scanner.close();
    }
}