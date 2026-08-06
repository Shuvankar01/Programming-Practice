import java.util.Scanner;

public class RemoveSpaces {

    public static String removeSpaces(String str) {

        return str.replaceAll("\\s+", "");

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter String: ");

        String input = sc.nextLine();

        System.out.println("Result: " + removeSpaces(input));

        sc.close();
    }
}