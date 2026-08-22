public class DeadlockExample {

    private static final Object LOCK1 = new Object();
    private static final Object LOCK2 = new Object();

    public static void main(String[] args) {

        Thread t1 = new Thread(() -> {

            synchronized (LOCK1) {

                System.out.println(
                        "Thread1 locked LOCK1"
                );

                synchronized (LOCK2) {

                    System.out.println(
                            "Thread1 locked LOCK2"
                    );
                }
            }
        });

        Thread t2 = new Thread(() -> {

            synchronized (LOCK2) {

                System.out.println(
                        "Thread2 locked LOCK2"
                );

                synchronized (LOCK1) {

                    System.out.println(
                            "Thread2 locked LOCK1"
                    );
                }
            }
        });

        t1.start();
        t2.start();
    }
}