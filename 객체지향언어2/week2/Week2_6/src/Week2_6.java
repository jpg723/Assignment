import java.util.Scanner;

public class Week2_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String name = null;
		String tel = null;
		int i;
		
		Phone p = new Phone(name, tel);
		
		for(i = 0; i < 2; i++) {
			System.out.print("�̸�, ��ȭ��ȣ�� �Է��ϼ���. >> ");
			name = sc.next();
			tel = sc.next();
			p.setName(name);
			p.setTel(tel);
			System.out.println(p.getName() + "�� ��ȭ��ȣ�� " + p.getTel());
		}
	}

}
