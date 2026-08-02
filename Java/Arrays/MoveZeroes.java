import java.util.Scanner;

public class MoveZeroes {

    static void moveZeroes(int[] arr) {

        int index = 0;

        for (int num : arr) {

            if (num != 0)
                arr[index++] = num;

        }

        while (index < arr.length)
            arr[index++] = 0;

    }

    static void print(int[] arr) {

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

        moveZeroes(arr);

        System.out.println("After Moving Zeroes:");

        print(arr);

        sc.close();
    }
}