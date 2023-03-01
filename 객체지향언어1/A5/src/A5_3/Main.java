package A5_3;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		Sum s = new Sum();
		
		System.out.print("정수를 입력하세요: ");
		int num1 = sc.nextInt();
		System.out.print("정수를 입력하세요: ");
		int num2 = sc.nextInt();
		
		s.sum(num1, num2);
	}
}
