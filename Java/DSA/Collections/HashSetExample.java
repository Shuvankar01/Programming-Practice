import java.util.HashSet;
import java.util.Set;

public class HashSetExample {

    public static void main(String[] args) {

        Set<Integer> numbers = new HashSet<>();

        numbers.add(10);
        numbers.add(20);
        numbers.add(30);
        numbers.add(20);
        numbers.add(10);

        System.out.println(
                "Unique Elements: " + numbers
        );

        System.out.println(
                "Contains 20? " + numbers.contains(20)
        );

        numbers.remove(30);

        System.out.println(
                "After Removal: " + numbers
        );
    }
}