class Student {
    String name;
    int age;

    Student(String n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(Student s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        System.out.println(name + " " + age);
    }
}

public class Constructor2 {
    public static void main(String[] args) {
        Student s1 = new Student("Shuvankar", 20);
        Student s2 = new Student(s1);

        s2.display();
    }
}