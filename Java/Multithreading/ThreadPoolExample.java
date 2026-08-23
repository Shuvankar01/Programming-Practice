import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ThreadPoolExample {

    public static void main(String[] args) {

        ExecutorService pool =
                Executors.newFixedThreadPool(2);

        Runnable task = () -> {

            String name =
                    Thread.currentThread().getName();

            System.out.println(
                    name + " started."
            );

            try {

                Thread.sleep(1000);

            } catch (InterruptedException ignored) {}

            System.out.println(
                    name + " finished."
            );
        };

        for (int i = 0; i < 4; i++)
            pool.submit(task);

        pool.shutdown();
    }
}