import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class CharacterFrequency {

    public static void printFrequency(String str) {

        Map<Character, Integer> frequencyMap = new HashMap<>();

        str = str.toLowerCase();

        for (char ch : str.toCharArray()) {

            if (Character.isWhitespace(ch)) {
                continue;
            }

            frequencyMap.put(ch, frequencyMap.getOrDefault(ch, 0) + 1);
        }

        System.out.println("\nCharacter Frequencies:");

        for (Map.Entry<Character, Integer> entry : frequencyMap.entrySet()) {
            System.out.println(entry.getKey() + " : " + entry.getValue());
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a String: ");
        String input = scanner.nextLine();

        printFrequency(input);

        scanner.close();
    }
}