package test_1;

import java.util.Scanner;
public class MemberArrayListTest {
	public MemberArrayListTest() {
		Scanner sc = new Scanner(System.in);
		MemberArrayList m = new MemberArrayList();
		int selectNo = 0;

		while(true)	{
			System.out.println("1. ȸ�� �߰� | 2. ȸ�� ���� | 3. ȸ�� �˻� | 4. ��ü ȸ�� ��� | 5. ����");
			System.out.print("�Է�>> ");
			selectNo = sc.nextInt();

			if(selectNo == 1) {
				m.addMember();
			}
			else if(selectNo == 2) {
				m.removeMember();
			}
			else if(selectNo == 3) {
				m.serachMember(); 
			}
			else if(selectNo == 4) {
				m.showAllMember();
			}
			else if(selectNo == 5) {
				System.out.println("���α׷� ����");
				break;
			}
			else
				System.out.println("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���");
		}
	}

}
