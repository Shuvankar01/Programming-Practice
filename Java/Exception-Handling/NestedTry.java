public class NestedTry {

    public static void main(String[] args) {

        try {

            System.out.println(
                    "Outer try block started."
            );

            try {

                int[] numbers = {10, 20, 30};

                System.out.println(
                        "Element = " + numbers[5]
                );

            } catch (ArrayIndexOutOfBoundsException e) {

                System.out.println(
                        "Inner Error: Invalid array index."
                );
            }

            int result = 10 / 0;

            System.out.println(
                    "Result = " + result
            );

        } catch (ArithmeticException e) {

            System.out.println(
                    "Outer Error: Division by zero."
            );
        }
    }
}