import java.util.Scanner;

public class Week1_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int a, b, c, d;
		int sum;
		
		System.out.print("500���� ����: ");
		a = sc.nextInt();
		System.out.print("100���� ����: ");
		b = sc.nextInt();
		System.out.print("50���� ����: ");
		c = sc.nextInt();
		System.out.print("10���� ����: ");
		d = sc.nextInt();
		
		sum = a * 500 + b * 100 + c * 50 + d * 10;
		
		System.out.print("�ݾ��� " + sum + "�� �Դϴ�.");
		

	}

}
