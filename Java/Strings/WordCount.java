import java.util.Scanner;

public class WordCount {

    public static int countWords(String str) {

        str = str.trim();

        if (str.isEmpty())
            return 0;

        return str.split("\\s+").length;
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter Sentence: ");

        String input = scanner.nextLine();

        System.out.println("Total Words = " + countWords(input));

        scanner.close();
    }
}