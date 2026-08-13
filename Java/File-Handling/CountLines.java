import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class CountLines {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fileName = scanner.nextLine().trim();

        if (fileName.isEmpty()) {
            System.out.println("File name cannot be empty.");
            scanner.close();
            return;
        }

        Path filePath = Path.of(fileName);

        try {

            long lineCount = Files.lines(filePath).count();

            System.out.println(
                    "Total Lines = " + lineCount
            );

        } catch (IOException e) {

            System.out.println(
                    "Unable to read file: "
                            + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}