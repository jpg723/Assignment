import java.util.Scanner;

public class Week1_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, d;
		int sum;
		
		System.out.print("500동전 개수: ");
		a = sc.nextInt();
		System.out.print("100동전 개수: ");
		b = sc.nextInt();
		System.out.print("50동전 개수: ");
		c = sc.nextInt();
		System.out.print("10동전 개수: ");
		d = sc.nextInt();
		
		sum = a * 500 + b * 100 + c * 50 + d * 10;
		
		System.out.print("금액은 " + sum + "원 입니다.");
		

	}

}
