import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

class Employee {

    private final int id;
    private final String name;
    private final double salary;

    public Employee(
            int id,
            String name,
            double salary
    ) {

        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    public String getName() {
        return name;
    }

    public double getSalary() {
        return salary;
    }

    @Override
    public String toString() {

        return id + " - "
                + name + " - "
                + salary;
    }
}

public class ComparatorExample {

    public static void main(String[] args) {

        List<Employee> employees =
                new ArrayList<>();

        employees.add(
                new Employee(101, "Rahul", 50000)
        );

        employees.add(
                new Employee(102, "Amit", 70000)
        );

        employees.add(
                new Employee(103, "Priya", 60000)
        );

        employees.sort(
                Comparator.comparingDouble(
                        Employee::getSalary
                )
        );

        System.out.println(
                "Employees Sorted By Salary:"
        );

        for (Employee employee : employees) {
            System.out.println(employee);
        }

        employees.sort(
                Comparator.comparing(
                        Employee::getName
                )
        );

        System.out.println(
                "\nEmployees Sorted By Name:"
        );

        for (Employee employee : employees) {
            System.out.println(employee);
        }
    }
}