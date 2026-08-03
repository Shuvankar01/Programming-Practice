import java.util.HashSet;
import java.util.Scanner;

public class DuplicateElement {

    public static void findDuplicates(int[] arr) {

        HashSet<Integer> set = new HashSet<>();
        HashSet<Integer> duplicates = new HashSet<>();

        for (int num : arr) {

            if (!set.add(num)) {
                duplicates.add(num);
            }

        }

        if (duplicates.isEmpty()) {
            System.out.println("No Duplicate Elements Found.");
        } else {
            System.out.println("Duplicate Elements: " + duplicates);
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array size: ");

        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements:");

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        findDuplicates(arr);

        sc.close();
    }
}