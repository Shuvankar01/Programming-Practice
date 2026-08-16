import java.util.HashMap;
import java.util.Map;

public class HashMapExample {

    public static void main(String[] args) {

        Map<String, Integer> marks =
                new HashMap<>();

        marks.put("Java", 90);
        marks.put("Python", 85);
        marks.put("SQL", 88);

        System.out.println(
                "Marks: " + marks
        );

        System.out.println(
                "Java Marks: " + marks.get("Java")
        );

        System.out.println(
                "Contains SQL? "
                        + marks.containsKey("SQL")
        );

        marks.put("Java", 95);

        System.out.println(
                "Updated Marks: " + marks
        );

        System.out.println("\nAll Subjects:");

        for (Map.Entry<String, Integer> entry
                : marks.entrySet()) {

            System.out.println(
                    entry.getKey()
                            + " -> "
                            + entry.getValue()
            );
        }
    }
}