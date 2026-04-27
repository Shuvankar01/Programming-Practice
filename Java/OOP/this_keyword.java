class Student {
    String name;

    Student(String name) {
        this.name = name;
    }

    void display() {
        System.out.println(name);
    }
}

public class this_keyword{
    public static void main(String[] args) {
        Student s = new Student("Shuvankar");
        s.display();
    }
}