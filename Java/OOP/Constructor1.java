class Student {
    String name;
    int age;

    Student(String n, int a) {
        name = n;
        age = a;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class Constructor1 {
    public static void main(String[] args) {
        Student s1 = new Student("Shuvankar", 20);
        s1.display();
    }
}