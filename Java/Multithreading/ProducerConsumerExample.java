class SharedBuffer {

    private int value;
    private boolean available = false;

    public synchronized void produce(int number)
            throws InterruptedException {

        while (available)
            wait();

        value = number;
        available = true;

        System.out.println(
                "Produced: " + value
        );

        notify();
    }

    public synchronized void consume()
            throws InterruptedException {

        while (!available)
            wait();

        System.out.println(
                "Consumed: " + value
        );

        available = false;

        notify();
    }
}

public class ProducerConsumerExample {

    public static void main(String[] args) {

        SharedBuffer buffer = new SharedBuffer();

        Thread producer = new Thread(() -> {

            try {

                for (int i = 1; i <= 5; i++)
                    buffer.produce(i);

            } catch (InterruptedException ignored) {}
        });

        Thread consumer = new Thread(() -> {

            try {

                for (int i = 1; i <= 5; i++)
                    buffer.consume();

            } catch (InterruptedException ignored) {}
        });

        producer.start();
        consumer.start();
    }
}