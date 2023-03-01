import java.util.InputMismatchException;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		char[] day = {'��', '��', 'ȭ', '��', '��', '��', '��'};
		
		while(true) {
			System.out.print("������ �Է��ϼ��� >> ");
			
			try {
				int Num = sc.nextInt();
				
				if(Num < 0) {
					System.out.print("���α׷��� �����մϴ�...");
					break;
				}
				
				System.out.println(day[Num % day.length]);
			}
			catch(InputMismatchException e) {
				System.out.println("���! ���� �Է����� �ʾҽ��ϴ�.");
				sc.nextLine();
			}
		}
		
		sc.close();

	}

}
