import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class WriteFile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fileName = scanner.nextLine().trim();

        System.out.print("Enter content: ");
        String content = scanner.nextLine();

        if (fileName.isEmpty()) {
            System.out.println("File name cannot be empty.");
            scanner.close();
            return;
        }

        Path filePath = Path.of(fileName);

        try {

            Files.writeString(filePath, content);

            System.out.println(
                    "Content written successfully."
            );

        } catch (IOException e) {

            System.out.println(
                    "Unable to write file: " + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}