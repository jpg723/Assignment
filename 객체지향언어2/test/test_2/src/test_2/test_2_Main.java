package test_2;

import java.util.HashMap;
import java.util.Scanner;

public class test_2_Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		HashMap<String, String> name = new HashMap<String, String>();

		System.out.println("**����Ʈ ���� ���α׷��Դϴ�**");
		System.out.println("1.�Է�  2. ����  3. ���  4.����  ������ ��ȣ��>> ");
		int num = sc.nextInt();

		if(num == 1) {
			System.out.println("�Է�>>");
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

