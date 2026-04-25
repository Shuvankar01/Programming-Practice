class MathOperation {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
}

public class overloading{
    public static void main(String[] args) {
        MathOperation obj = new MathOperation();

        System.out.println(obj.add(10, 20));
        System.out.println(obj.add(10, 20, 30));
    }
}