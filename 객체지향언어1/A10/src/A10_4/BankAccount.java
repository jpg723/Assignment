package A10_4;

public class BankAccount {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Account account1 = new Account();
		Account account2 = new Account();
		
		account1.deposit(10000);
		System.out.println(account1.toString(1));
		
		account2.deposit(30000);
		System.out.println(account2.toString(2));
		
		account2.withdraw(5000);
		System.out.println(account2.toString(2));
		
		account1.transfer(5000, account1, account2);
		System.out.println(account1.toString(1));
		System.out.println(account2.toString(2));
		
		
	}

}
