
public class BankAccount {

	private int balance = 0;

	public int getBalance() {
		return balance;
	}
	public void setBalance(int balance) {
		this.balance = balance;
	}
	public void deposit(int money) throws NegativeBalanceException {
		
		balance += money;
		System.out.println("정상 입금 처리=> 입금액: " + money + ", 잔액: " + balance);
		
		if(money < 0) {
			throw new NegativeBalanceException("음수 입금액");
		}
	}
	public void withdraw(int money) throws NegativeBalanceException {

		balance -= money;
		System.out.println("정상 출금 처리=> 인출액: " + money + ", 잔액: " + balance);
	
		if(money >= balance) {
			throw new NegativeBalanceException("잔고가 부족합니다.");
		}
		if(money < 0) {
			throw new NegativeBalanceException("음수 출금액");
			
		}
	}
}
