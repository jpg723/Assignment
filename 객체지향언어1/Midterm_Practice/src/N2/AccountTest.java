package N2;

import java.util.Scanner;

public class AccountTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int choice = 0;
		int money = 0;
		Account a = new Account();
		
		System.out.println("새로운 계좌가 만들어졌습니다.");
		
		do {
			System.out.println("---------------------------");
			System.out.println("1.예금 2.출금 3.잔고 4.종료");
			System.out.println("---------------------------");
			System.out.print("선택> ");
			choice = sc.nextInt();
		
			switch(choice) {
			
				case 1:
					System.out.print("입금액은? ");
					money = sc.nextInt();
					a.deposit(money);
					break;
				
				
				case 2:
					System.out.print("출금액은? ");
					money = sc.nextInt();
					a.withdraw(money);
					break;
				
				case 3:
					a.print();
					break;
				
				case 4:
					System.out.println("예금 업무 종료!");
					break;
				
				default:
					System.out.println("입력이 잘못됐습니다.");
			
			}
			
		} while(choice != 4);
		
	}

}
