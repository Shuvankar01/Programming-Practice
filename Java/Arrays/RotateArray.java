import java.util.Scanner;

public class RotateArray {

    static void reverse(int[] arr, int start, int end) {

        while (start < end) {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }

    }

    static void rotate(int[] arr, int k) {

        int n = arr.length;

        k %= n;

        reverse(arr, 0, n - 1);

        reverse(arr, 0, k - 1);

        reverse(arr, k, n - 1);

    }

    static void printArray(int[] arr) {

        for (int i : arr)
            System.out.print(i + " ");

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");

        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements:");

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.print("Rotate by: ");

        int k = sc.nextInt();

        rotate(arr, k);

        System.out.println("Rotated Array:");

        printArray(arr);

        sc.close();
    }
}