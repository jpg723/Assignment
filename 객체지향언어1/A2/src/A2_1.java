import java.util.Scanner;

public class A2_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		int orange = 0, box = 0, remain = 0;
		
		System.out.print("오렌지의 개수를 입력하시오: ");
		orange = sc.nextInt();
		
		box = orange / 10;
		remain = orange % 10;
		
		System.out.println(box + "박스가 필요하고 " + remain + "개가 남습니다.");		
	}
}
