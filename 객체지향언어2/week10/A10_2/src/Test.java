import java.util.Scanner;
import java.util.StringTokenizer;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		String s;
		int i;
		int space = 0;

		while(true){
			System.out.println("�� �ٷ� ������ �Է��ϼ���. (����� exit�� �Է�) ");
			s = sc.nextLine();

			if(s.equals("exit")) {
				System.out.println("�����մϴ�...");
				break;
			}
			StringTokenizer stk = new StringTokenizer(s, " ");
			space = stk.countTokens() - 1;
			System.out.println("���� ������ " + stk.countTokens());

			System.out.println("������ ������ " + space);

		}

	}

}
