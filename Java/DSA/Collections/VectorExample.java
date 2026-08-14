import java.util.Vector;

public class VectorExample {

    public static void main(String[] args) {

        Vector<Integer> numbers = new Vector<>();

        for (int i = 1; i <= 5; i++) {
            numbers.add(i);
        }

        System.out.println("Vector: " + numbers);
    }
}