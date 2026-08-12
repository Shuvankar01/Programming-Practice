import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class ReadFile {

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

            if (!Files.exists(filePath)) {
                System.out.println("File does not exist.");
                return;
            }

            String content = Files.readString(filePath);

            System.out.println("\nFile Content:");
            System.out.println("--------------------");
            System.out.println(content);
            System.out.println("--------------------");

        } catch (IOException e) {

            System.out.println(
                    "Unable to read file: " + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}