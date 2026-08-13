import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.Scanner;

public class RenameFile {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter current file name: ");
        String oldName = scanner.nextLine().trim();

        System.out.print("Enter new file name: ");
        String newName = scanner.nextLine().trim();

        if (oldName.isEmpty() || newName.isEmpty()) {

            System.out.println(
                    "File names cannot be empty."
            );

            scanner.close();
            return;
        }

        Path source = Path.of(oldName);
        Path target = Path.of(newName);

        try {

            if (!Files.exists(source)) {

                System.out.println(
                        "Source file does not exist."
                );

                return;
            }

            if (Files.exists(target)) {

                System.out.println(
                        "Target file already exists."
                );

                return;
            }

            Files.move(
                    source,
                    target,
                    StandardCopyOption.ATOMIC_MOVE
            );

            System.out.println(
                    "File renamed successfully."
            );

        } catch (IOException e) {

            System.out.println(
                    "Unable to rename file: "
                            + e.getMessage()
            );

        } finally {

            scanner.close();
        }
    }
}