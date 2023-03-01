package A11_1;

public class BankAccount {
	private String name;
	private String accNo;
	private int balance;
	private double interest;
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return name;
	}
	
	public void setAccNo(String accNo) {
		this.accNo = accNo;
	}
	
	public String getAccNo() {
		return accNo;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public int getBalance() {
		return balance;
	}
	
	public void setInterest(double interest) {
		this.interest = interest;
	}
	
	public double getInterest() {
		return interest;
	}
	
	public String toString() {
		return this.accNo + " :: " + this.name + " :: " + this.balance + "원 :: " + this.interest + "%";
	}
	
	BankAccount(String name, int balance, double interest) {
		
	}
	
	public boolean deposit(int money) {
		
		if(money < 0)
			return false;
		else {
			balance += money;
			return true;
		}
	}
	
	public boolean withdraw(int money) {
		
		if(balance < money)
			return false;
		
		else {
			balance -= money;
			return true;
		}
	}
	
	public static boolean transfer(BankAccount from, BankAccount to, int money) {
		
		if(from.withdraw(money) == true && to.deposit(money) == true)
			return true;
		
		else
			return false;
		
	}
}
