import java.util.*;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of an Array:");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter the elements to an Array:");
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.println("Enter the key element:");

        int key = sc.nextInt();
        boolean found = false;

        for(int i = 0; i < n; i++) {
            if(arr[i] == key) {
                System.out.println("Found at index " + i);
                found = true;
                break;
            }
        }

        if(!found)
            System.out.println("Not Found");
    }
}