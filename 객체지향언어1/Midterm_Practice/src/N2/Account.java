package N2;

public class Account {
	int balance;
	
	void withdraw(int money) {
		
		balance -= money; 
	}
	
	void deposit(int money) {
		balance += money; 
	}
	
	void print() {
		
		System.out.println("현재 잔액은 " + balance + "원 입니다.");
	}
}
