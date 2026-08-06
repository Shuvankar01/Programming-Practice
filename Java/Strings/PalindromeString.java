import java.util.Scanner;

public class PalindromeString {

    public static boolean isPalindrome(String str) {

        int left = 0;
        int right = str.length() - 1;

        while (left < right) {

            if (Character.toLowerCase(str.charAt(left))
                    != Character.toLowerCase(str.charAt(right))) {

                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter String: ");

        String input = sc.nextLine();

        if (isPalindrome(input))
            System.out.println("Palindrome");
        else
            System.out.println("Not Palindrome");

        sc.close();
    }
}