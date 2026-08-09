import java.util.Scanner;

public class TowerOfHanoi {

    public static void solve(
            int disks,
            char source,
            char auxiliary,
            char destination
    ) {

        if (disks == 0) {
            return;
        }

        solve(
                disks - 1,
                source,
                destination,
                auxiliary
        );

        System.out.println(
                "Move disk " + disks +
                " from " + source +
                " to " + destination
        );

        solve(
                disks - 1,
                auxiliary,
                source,
                destination
        );
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of disks: ");
        int disks = scanner.nextInt();

        if (disks <= 0) {
            System.out.println("Number of disks must be positive.");
        } else {
            solve(disks, 'A', 'B', 'C');
        }

        scanner.close();
    }
}