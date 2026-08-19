class Worker extends Thread {

    @Override
    public void run() {

        for (int i = 1; i <= 3; i++) {

            System.out.println("Working " + i);

        }
    }
}

public class ThreadJoinExample {

    public static void main(String[] args)
            throws InterruptedException {

        Worker worker = new Worker();

        worker.start();

        worker.join();

        System.out.println(
                "Main thread continues."
        );
    }
}