class MyThread extends Thread {

    @Override
    public void run() {

        for (int i = 1; i <= 5; i++) {

            System.out.println(
                    getName() + " : " + i
            );

        }
    }
}

public class ThreadClassExample {

    public static void main(String[] args) {

        MyThread thread1 = new MyThread();
        MyThread thread2 = new MyThread();

        thread1.setName("Thread-A");
        thread2.setName("Thread-B");

        thread1.start();
        thread2.start();
    }
}