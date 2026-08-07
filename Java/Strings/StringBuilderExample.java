import java.util.Scanner;

public class StringBuilderExample {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter String: ");

        StringBuilder builder = new StringBuilder(scanner.nextLine());

        System.out.println("\nOriginal String : " + builder);

        builder.append(" Java");

        System.out.println("After Append    : " + builder);

        builder.insert(0, "Welcome ");

        System.out.println("After Insert    : " + builder);

        builder.replace(0, 7, "Hello");

        System.out.println("After Replace   : " + builder);

        builder.delete(5, 6);

        System.out.println("After Delete    : " + builder);

        builder.reverse();

        System.out.println("After Reverse   : " + builder);

        scanner.close();
    }
}