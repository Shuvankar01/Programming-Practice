import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class FileExceptionExample {

    public static void readFile(String fileName) {

        try (
                BufferedReader reader =
                        new BufferedReader(
                                new FileReader(fileName)
                        )
        ) {

            String line;

            while ((line = reader.readLine()) != null) {

                System.out.println(line);
            }

        } catch (IOException e) {

            System.out.println(
                    "Unable to read file: "
                            + e.getMessage()
            );
        }
    }

    public static void main(String[] args) {

        readFile("example.txt");
    }
}