import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Scanner;

public class CountWords {

    public static int countWords(String content) {

        String trimmed = content.trim();

        if (trimmed.isEmpty()) {
            return 0;
        }

        return trimmed.split("\\s+").length;
    }

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

            String content = Files.readString(filePath);

            int wordCount = countWords(content);

            System.out.println(
                    "Total Words = " + wordCount
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