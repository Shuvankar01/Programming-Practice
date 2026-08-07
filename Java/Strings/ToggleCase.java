import java.util.Scanner;

public class ToggleCase {

    public static String toggleCase(String str) {

        StringBuilder result = new StringBuilder();

        for (char ch : str.toCharArray()) {

            if (Character.isUpperCase(ch))
                result.append(Character.toLowerCase(ch));

            else if (Character.isLowerCase(ch))
                result.append(Character.toUpperCase(ch));

            else
                result.append(ch);
        }

        return result.toString();
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter String: ");

        String input = scanner.nextLine();

        System.out.println("Toggled String: " + toggleCase(input));

        scanner.close();
    }
}