import java.util.Scanner;

public class MultipleCatch {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        try {

            System.out.print("Enter array size: ");
            int size = scanner.nextInt();

            int[] numbers = new int[size];

            System.out.println("Enter array elements:");

            for (int i = 0; i < size; i++) {
                numbers[i] = scanner.nextInt();
            }

            System.out.print("Enter index: ");
            int index = scanner.nextInt();

            System.out.println(
                    "Element = " + numbers[index]
            );

        } catch (NegativeArraySizeException e) {

            System.out.println(
                    "Error: Array size cannot be negative."
            );

        } catch (ArrayIndexOutOfBoundsException e) {

            System.out.println(
                    "Error: Invalid array index."
            );

        } catch (Exception e) {

            System.out.println(
                    "Error: Invalid input."
            );

        } finally {

            scanner.close();
        }
    }
}