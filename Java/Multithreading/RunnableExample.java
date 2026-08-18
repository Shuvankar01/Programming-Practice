class DownloadTask implements Runnable {

    @Override
    public void run() {

        for (int i = 1; i <= 5; i++) {

            System.out.println(
                    Thread.currentThread().getName()
                            + " Downloading "
                            + (i * 20)
                            + "%"
            );

        }
    }
}

public class RunnableExample {

    public static void main(String[] args) {

        Thread t1 = new Thread(new DownloadTask());
        Thread t2 = new Thread(new DownloadTask());

        t1.setName("Chrome");
        t2.setName("Firefox");

        t1.start();
        t2.start();
    }
}