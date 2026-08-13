import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.Scanner;

public class CopyFile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter source file: ");
        String sourceName = scanner.nextLine().trim();

        System.out.print("Enter destination file: ");
        String destinationName = scanner.nextLine().trim();

        if (sourceName.isEmpty() || destinationName.isEmpty()) {

            System.out.println(
                    "File names cannot be empty."
            );

            scanner.close();
            return;
        }

        Path source = Path.of(sourceName);
        Path destination = Path.of(destinationName);

        try {

            if (!Files.exists(source)) {

                System.out.println(
                        "Source file does not exist."
                );

                return;
            }

            Files.copy(
                    source,
                    destination,
                    StandardCopyOption.REPLACE_EXISTING
            );

            System.out.println(
                    "File copied successfully."
            );

        } catch (IOException e) {

            System.out.println(
                    "Unable to copy file: "
                            + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}