
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
		System.out.println("���� �Ա� ó��=> �Աݾ�: " + money + ", �ܾ�: " + balance);
		
		if(money < 0) {
			throw new NegativeBalanceException("���� �Աݾ�");
		}
	}
	public void withdraw(int money) throws NegativeBalanceException {

		balance -= money;
		System.out.println("���� ��� ó��=> �����: " + money + ", �ܾ�: " + balance);
	
		if(money >= balance) {
			throw new NegativeBalanceException("�ܰ� �����մϴ�.");
		}
		if(money < 0) {
			throw new NegativeBalanceException("���� ��ݾ�");
			
		}
	}
}
