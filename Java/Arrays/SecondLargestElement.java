import java.util.Scanner;

public class SecondLargestElement {

    public static int findSecondLargest(int[] arr) {

        if (arr.length < 2) {
            throw new IllegalArgumentException("Array must contain at least two elements.");
        }

        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int num : arr) {

            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }

        }

        if (secondLargest == Integer.MIN_VALUE) {
            throw new IllegalArgumentException("Second largest element does not exist.");
        }

        return secondLargest;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter array elements:");

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        System.out.println("Second Largest Element = " + findSecondLargest(arr));

        sc.close();
    }
}