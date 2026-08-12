import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class DeleteFile {

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

                System.out.println(
                        "File does not exist."
                );

            } else {

                Files.delete(filePath);

                System.out.println(
                        "File deleted successfully."
                );
            }

        } catch (IOException e) {

            System.out.println(
                    "Unable to delete file: "
                            + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}