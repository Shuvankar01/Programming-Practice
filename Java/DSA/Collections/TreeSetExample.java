import java.util.Set;
import java.util.TreeSet;

public class TreeSetExample {

    public static void main(String[] args) {

        Set<Integer> numbers = new TreeSet<>();

        numbers.add(50);
        numbers.add(10);
        numbers.add(40);
        numbers.add(20);
        numbers.add(30);
        numbers.add(20);

        System.out.println(
                "Sorted Unique Elements: " + numbers
        );

        TreeSet<Integer> sortedNumbers =
                new TreeSet<>(numbers);

        System.out.println(
                "Smallest Element: "
                        + sortedNumbers.first()
        );

        System.out.println(
                "Largest Element: "
                        + sortedNumbers.last()
        );
    }
}