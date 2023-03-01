import java.util.Scanner;

public class Week2_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		String id;
		String ans;
		char i;

		while(true)	{
			System.out.print("당신의 주민번호를 입력하세요.(012345-1234567) >> ");
			id = sc.next();

			i = id.charAt(7);
			
			if(i == '1' || i == '3') {
				System.out.println("당신은 남자입니다.");
			}
			else if(i == '2' || i == '4') {
				System.out.println("당신은 여자입니다.");
			}
			else {
				System.out.println("유효하지 않은 주민번호 입니다.");
			}
			
			System.out.print("입력을 계속 하시겠습니까? (y/n)");
			ans = sc.next();
		
			if(ans.equals("n")) {
				break;
			}
				
		}
	}

}
