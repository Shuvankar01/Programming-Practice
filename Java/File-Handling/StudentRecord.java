import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.util.Scanner;

public class StudentRecord {

    private static final Path FILE_PATH =
            Path.of("students.txt");

    public static void addStudent(
            Scanner scanner
    ) throws IOException {

        System.out.print("Enter student ID: ");
        String id = scanner.nextLine().trim();

        System.out.print("Enter student name: ");
        String name = scanner.nextLine().trim();

        System.out.print("Enter student course: ");
        String course = scanner.nextLine().trim();

        if (id.isEmpty()
                || name.isEmpty()
                || course.isEmpty()) {

            System.out.println(
                    "All fields are required."
            );

            return;
        }

        String record =
                id + " | " + name + " | " + course
                        + System.lineSeparator();

        Files.writeString(
                FILE_PATH,
                record,
                StandardOpenOption.CREATE,
                StandardOpenOption.APPEND
        );

        System.out.println(
                "Student added successfully."
        );
    }

    public static void viewStudents()
            throws IOException {

        if (!Files.exists(FILE_PATH)) {

            System.out.println(
                    "No student records found."
            );

            return;
        }

        String content =
                Files.readString(FILE_PATH);

        System.out.println("\nStudent Records");
        System.out.println("----------------------------");
        System.out.print(content);
        System.out.println("----------------------------");
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        while (true) {

            System.out.println("\n===== Student Records =====");
            System.out.println("1. Add Student");
            System.out.println("2. View Students");
            System.out.println("3. Exit");

            System.out.print("Choose an option: ");

            String choice = scanner.nextLine().trim();

            try {

                switch (choice) {

                    case "1":
                        addStudent(scanner);
                        break;

                    case "2":
                        viewStudents();
                        break;

                    case "3":
                        System.out.println(
                                "Program terminated."
                        );

                        scanner.close();
                        return;

                    default:
                        System.out.println(
                                "Invalid option."
                        );
                }

            } catch (IOException e) {

                System.out.println(
                        "File operation failed: "
                                + e.getMessage()
                );
            }
        }
    }
}