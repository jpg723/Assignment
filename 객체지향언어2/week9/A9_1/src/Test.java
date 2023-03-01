
public class Test {

	public static void main(String[] args){
		// TODO Auto-generated method stub

		BankAccount b = new BankAccount();
		
		try {
			b.deposit(100);
			b.withdraw(100);
			
		} catch(NegativeBalanceException e) {
			e.printStackTrace();
		}

	}

}
