import java.util.Scanner;

public class Week2_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		String id;
		String ans;
		char i;

		while(true)	{
			System.out.print("����� �ֹι�ȣ�� �Է��ϼ���.(012345-1234567) >> ");
			id = sc.next();

			i = id.charAt(7);
			
			if(i == '1' || i == '3') {
				System.out.println("����� �����Դϴ�.");
			}
			else if(i == '2' || i == '4') {
				System.out.println("����� �����Դϴ�.");
			}
			else {
				System.out.println("��ȿ���� ���� �ֹι�ȣ �Դϴ�.");
			}
			
			System.out.print("�Է��� ��� �Ͻðڽ��ϱ�? (y/n)");
			ans = sc.next();
		
			if(ans.equals("n")) {
				break;
			}
				
		}
	}

}
