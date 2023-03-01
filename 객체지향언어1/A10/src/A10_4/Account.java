package A10_4;

public class Account {
	
	private int accountNumber;
	private int owner;
	private int balance;

	public void deposit(int price) {
		balance += price;	
	}
	
	public void withdraw(int price) {
		balance -= price;
	}
	
	public String toString(int accountNumber) {
		return "myAccount" + accountNumber + " : 현재 잔액은 " + balance + "입니다.";
	}
	
	public void transfer(int price, Account myaccount1, Account myaccount2) {
		System.out.println("transfer(" + price + "원)");
		myaccount1.balance -= price;
		myaccount2.balance += price;
	}

}
