import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Student implements Comparable<Student> {

    private final int id;
    private final String name;
    private final double marks;

    public Student(int id, String name, double marks) {
        this.id = id;
        this.name = name;
        this.marks = marks;
    }

    public double getMarks() {
        return marks;
    }

    @Override
    public int compareTo(Student other) {

        return Double.compare(
                this.marks,
                other.marks
        );
    }

    @Override
    public String toString() {

        return id + " - "
                + name + " - "
                + marks;
    }
}

public class ComparableExample {

    public static void main(String[] args) {

        List<Student> students =
                new ArrayList<>();

        students.add(
                new Student(101, "Rahul", 82.5)
        );

        students.add(
                new Student(102, "Amit", 91.0)
        );

        students.add(
                new Student(103, "Priya", 76.5)
        );

        Collections.sort(students);

        System.out.println(
                "Students Sorted By Marks:"
        );

        for (Student student : students) {
            System.out.println(student);
        }
    }
}