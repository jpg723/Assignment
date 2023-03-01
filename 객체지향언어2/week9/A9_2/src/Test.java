import java.util.InputMismatchException;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		char[] day = {'일', '월', '화', '수', '목', '금', '토'};
		
		while(true) {
			System.out.print("정수를 입력하세요 >> ");
			
			try {
				int Num = sc.nextInt();
				
				if(Num < 0) {
					System.out.print("프로그램을 종료합니다...");
					break;
				}
				
				System.out.println(day[Num % day.length]);
			}
			catch(InputMismatchException e) {
				System.out.println("경고! 수를 입력하지 않았습니다.");
				sc.nextLine();
			}
		}
		
		sc.close();

	}

}
