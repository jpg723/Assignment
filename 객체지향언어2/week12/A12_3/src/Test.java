import java.util.HashMap;
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);

		HashMap<String, String> name = new HashMap<String, String>();

		System.out.print("�Է��Ϸ��� �������� ����: ");
		int n = sc.nextInt();

		System.out.println("�̸��� ��ȭ��ȣ�� �Է��ϼ���.(��: ȫ�浿 010-111-1212)");
		for(int i = 1; i <= n; i++) {
			System.out.print(i + ". �̸�, ��ȭ��ȣ >> ");
			name.put(sc.next(), sc.next());
		}


		System.out.print("\n��ȭ��ȣ�� ã������ ȸ���� �̸���: ");
		String member = sc.next();

		String number = (String) name.get(member);
		
		if(number == null) 
			System.out.println("�ش��ϴ� �̸��� ȸ���� ����Ʈ�� �����ϴ�.");
		else
			System.out.println(member + "�� ��ȭ��ȣ��: " + number); 

	}

}
