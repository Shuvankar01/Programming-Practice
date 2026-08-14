import java.util.Stack;

public class StackExample {

    public static void main(String[] args) {

        Stack<String> stack = new Stack<>();

        stack.push("Java");
        stack.push("Python");
        stack.push("SQL");

        System.out.println("Top Element: " + stack.peek());

        stack.pop();

        System.out.println("Stack: " + stack);
    }
}