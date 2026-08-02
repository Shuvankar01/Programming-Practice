import java.util.Scanner;

public class MergeArrays {

    static int[] merge(int[] a, int[] b) {

        int[] merged = new int[a.length + b.length];

        int index = 0;

        for (int num : a)
            merged[index++] = num;

        for (int num : b)
            merged[index++] = num;

        return merged;
    }

    static void print(int[] arr) {

        for (int i : arr)
            System.out.print(i + " ");

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Size of first array: ");

        int n = sc.nextInt();

        int[] a = new int[n];

        System.out.println("Enter elements:");

        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        System.out.print("Size of second array: ");

        int m = sc.nextInt();

        int[] b = new int[m];

        System.out.println("Enter elements:");

        for (int i = 0; i < m; i++)
            b[i] = sc.nextInt();

        int[] merged = merge(a, b);

        System.out.println("Merged Array:");

        print(merged);

        sc.close();
    }
}