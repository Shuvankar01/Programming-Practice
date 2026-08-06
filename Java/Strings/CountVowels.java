import java.util.Scanner;

public class CountVowels {

    public static int countVowels(String str) {

        int count = 0;

        str = str.toLowerCase();

        for (char ch : str.toCharArray()) {

            if (ch == 'a' || ch == 'e' || ch == 'i'
                    || ch == 'o' || ch == 'u') {

                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter String: ");

        String input = sc.nextLine();

        System.out.println("Total Vowels = " + countVowels(input));

        sc.close();
    }
}