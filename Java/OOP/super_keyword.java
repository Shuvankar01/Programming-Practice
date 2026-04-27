class Parent {
    int x = 100;
}

class Child extends Parent {
    int x = 200;

    void show() {
        System.out.println("Child x = " + x);
        System.out.println("Parent x = " + super.x);
    }
}

public class super_keyword{
    public static void main(String[] args) {
        Child c = new Child();
        c.show();
    }
}