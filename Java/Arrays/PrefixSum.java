import java.util.Scanner;

public class PrefixSum {

    public static int[] buildPrefixSum(int[] arr) {

        int[] prefix = new int[arr.length];

        prefix[0] = arr[0];

        for (int i = 1; i < arr.length; i++) {

            prefix[i] = prefix[i - 1] + arr[i];

        }

        return prefix;
    }

    public static int rangeSum(int[] prefix, int left, int right) {

        if (left == 0)
            return prefix[right];

        return prefix[right] - prefix[left - 1];
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

        int[] prefix = buildPrefixSum(arr);

        System.out.print("Enter Left Index: ");
        int left = sc.nextInt();

        System.out.print("Enter Right Index: ");
        int right = sc.nextInt();

        System.out.println("Range Sum = " + rangeSum(prefix, left, right));

        sc.close();
    }
}