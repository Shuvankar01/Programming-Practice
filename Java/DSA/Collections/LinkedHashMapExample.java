import java.util.LinkedHashMap;
import java.util.Map;

public class LinkedHashMapExample {

    public static void main(String[] args) {

        Map<Integer, String> students =
                new LinkedHashMap<>();

        students.put(101, "Rahul");
        students.put(102, "Amit");
        students.put(103, "Priya");
        students.put(104, "Neha");

        System.out.println(
                "Students:"
        );

        for (Map.Entry<Integer, String> entry
                : students.entrySet()) {

            System.out.println(
                    entry.getKey()
                            + " -> "
                            + entry.getValue()
            );
        }
    }
}