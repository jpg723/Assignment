package A5_4;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		Abs a = new Abs();
		
		System.out.print("정수를 입력하세요: ");
		int num = sc.nextInt();
		
		System.out.println("입력된 정수 " + num + "의 절대값은 " + a.abs(num) + "입니다.");
	}
}
