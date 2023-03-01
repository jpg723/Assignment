import java.util.Scanner;

public class A2_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		double mile = 0, km = 0;
		
		System.out.print("마일을 입력하시오: ");
		mile = sc.nextDouble();
		
		km = mile * 1.609;
		
		System.out.println(mile + "마일은 " + km + "킬로미터입니다.");
	}
}
