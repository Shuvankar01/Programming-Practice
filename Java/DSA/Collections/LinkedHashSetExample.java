import java.util.LinkedHashSet;
import java.util.Set;

public class LinkedHashSetExample {

    public static void main(String[] args) {

        Set<String> languages =
                new LinkedHashSet<>();

        languages.add("Java");
        languages.add("Python");
        languages.add("C++");
        languages.add("Java");
        languages.add("JavaScript");

        System.out.println(
                "Languages: " + languages
        );

        System.out.println("\nTraversal:");

        for (String language : languages) {
            System.out.println(language);
        }
    }
}