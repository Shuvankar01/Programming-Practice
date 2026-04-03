class Student {
    String name;
    int age;

    // Method to display details
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class class1 {
    public static void main(String[] args) {

        // Creating object
        Student s1 = new Student();

        // Assigning values
        s1.name = "Shuvankar";
        s1.age = 20;

        // Calling method
        s1.display();
    }
}