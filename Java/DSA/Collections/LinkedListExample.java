import java.util.LinkedList;

public class LinkedListExample {

    public static void main(String[] args) {

        LinkedList<String> cities = new LinkedList<>();

        cities.add("Bhubaneswar");
        cities.add("Cuttack");
        cities.addFirst("Puri");
        cities.addLast("Rourkela");

        System.out.println("Cities: " + cities);

        cities.removeFirst();

        System.out.println("After Removal: " + cities);
    }
}