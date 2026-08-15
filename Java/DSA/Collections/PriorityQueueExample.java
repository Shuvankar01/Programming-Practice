import java.util.PriorityQueue;

public class PriorityQueueExample {

    public static void main(String[] args) {

        PriorityQueue<Integer> queue =
                new PriorityQueue<>();

        queue.offer(40);
        queue.offer(10);
        queue.offer(30);
        queue.offer(20);

        System.out.println(
                "Priority Queue: " + queue
        );

        System.out.println(
                "Highest Priority Element: "
                        + queue.peek()
        );

        System.out.println("\nProcessing Elements:");

        while (!queue.isEmpty()) {

            System.out.println(queue.poll());
        }
    }
}