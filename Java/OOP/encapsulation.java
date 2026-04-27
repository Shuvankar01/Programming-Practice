class Bank {
    private int balance = 1000;

    public int getBalance() {
        return balance;
    }

    public void setBalance(int amount) {
        balance = amount;
    }
}

public class encapsulation {
    public static void main(String[] args) {
        Bank b = new Bank();

        b.setBalance(5000);
        System.out.println("Balance: " + b.getBalance());
    }
}