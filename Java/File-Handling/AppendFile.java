import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.util.Scanner;

public class AppendFile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fileName = scanner.nextLine().trim();

        System.out.print("Enter content to append: ");
        String content = scanner.nextLine();

        if (fileName.isEmpty()) {
            System.out.println("File name cannot be empty.");
            scanner.close();
            return;
        }

        Path filePath = Path.of(fileName);

        try {

            Files.writeString(
                    filePath,
                    content + System.lineSeparator(),
                    StandardOpenOption.CREATE,
                    StandardOpenOption.APPEND
            );

            System.out.println(
                    "Content appended successfully."
            );

        } catch (IOException e) {

            System.out.println(
                    "Unable to append content: "
                            + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}