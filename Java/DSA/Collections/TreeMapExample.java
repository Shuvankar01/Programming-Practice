import java.util.Map;
import java.util.TreeMap;

public class TreeMapExample {

    public static void main(String[] args) {

        Map<Integer, String> students =
                new TreeMap<>();

        students.put(103, "Priya");
        students.put(101, "Rahul");
        students.put(104, "Neha");
        students.put(102, "Amit");

        System.out.println(
                "Students Sorted By ID:"
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