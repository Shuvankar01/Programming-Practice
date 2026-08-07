import java.util.Scanner;

public class SubstringSearch {

    public static int search(String text, String pattern) {
        return text.indexOf(pattern);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter Main String: ");
        String text = scanner.nextLine();

        System.out.print("Enter Substring: ");
        String pattern = scanner.nextLine();

        int index = search(text, pattern);

        if (index != -1)
            System.out.println("Substring found at index: " + index);
        else
            System.out.println("Substring not found.");

        scanner.close();
    }
}