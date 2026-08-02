import java.util.Scanner;

public class SmallestElement {

    public static int findSmallest(int[] arr) {

        int smallest = arr[0];

        for (int num : arr) {

            if (num < smallest)
                smallest = num;

        }

        return smallest;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");

        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements:");

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.println("Smallest Element = " + findSmallest(arr));

        sc.close();
    }
}