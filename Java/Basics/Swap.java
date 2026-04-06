
public class Swap {
    static void swapNum(int a, int b) {
        int temp = a;
        a = b;
        b = temp;

        System.out.println("After swap: a = " + a + ", b = " + b);
    }

    public static void main(String[] args) {
        int x = 5, y = 10;

        swapNum(x, y);
    }
}