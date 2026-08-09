import java.util.Scanner;

public class BinarySearchRecursion {

    public static int binarySearch(
            int[] arr,
            int left,
            int right,
            int target
    ) {

        if (left > right) {
            return -1;
        }

        int middle = left + (right - left) / 2;

        if (arr[middle] == target) {
            return middle;
        }

        if (target < arr[middle]) {
            return binarySearch(
                    arr,
                    left,
                    middle - 1,
                    target
            );
        }

        return binarySearch(
                arr,
                middle + 1,
                right,
                target
        );
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter array size: ");
        int n = scanner.nextInt();

        int[] arr = new int[n];

        System.out.println(
                "Enter " + n +
                " elements in ascending order:"
        );

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.print("Enter target: ");
        int target = scanner.nextInt();

        int index = binarySearch(
                arr,
                0,
                arr.length - 1,
                target
        );

        if (index != -1) {
            System.out.println(
                    "Target found at index: " + index
            );
        } else {
            System.out.println("Target not found.");
        }

        scanner.close();
    }
}