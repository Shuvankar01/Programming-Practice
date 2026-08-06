import java.util.Scanner;

public class Anagram {

    public static boolean isAnagram(String s1, String s2) {

        s1 = s1.replaceAll("\\s+", "").toLowerCase();
        s2 = s2.replaceAll("\\s+", "").toLowerCase();

        if (s1.length() != s2.length())
            return false;

        int[] freq = new int[26];

        for (char c : s1.toCharArray())
            freq[c - 'a']++;

        for (char c : s2.toCharArray())
            freq[c - 'a']--;

        for (int count : freq)
            if (count != 0)
                return false;

        return true;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter First String: ");
        String s1 = sc.nextLine();

        System.out.print("Enter Second String: ");
        String s2 = sc.nextLine();

        if (isAnagram(s1, s2))
            System.out.println("Strings are Anagrams");
        else
            System.out.println("Strings are NOT Anagrams");

        sc.close();
    }
}