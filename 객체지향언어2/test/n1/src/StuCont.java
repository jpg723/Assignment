import java.util.ArrayList;
import java.util.Scanner;

public class StuCont{

	ArrayList<StuData> list;
	Scanner sc;
	private String name;
	private int score;
	StuData data;				//���۷��� ���� 
	boolean flag;

	StuCont() {
		sc = new Scanner(System.in);
		flag = true;	//�ߺ��� �й��Է� ������ ��ȿ�� �˻縦 ���� ����
	}

	//�Է�
	void insert(){
		int stu_Num = 1;
		int i;

		for(i = 0; i < stu_Num; i++) {
			System.out.print("�̸��� �Է��ϼ���: ");
			name = sc.next();
			System.out.print("������ �Է��ϼ���: ");
			score = sc.nextInt();
		}
		System.out.println("�̸�: " + name +", ����: "+ score);

	}
	void serch(){

		String find;

		System.out.print("�˻��� �̸��� �Է��ϼ���:");	
		find = sc.next();


		if(find.equals(name)) { 		    		  
			System.out.println(score);
		}
		else {
			System.out.println("�ش��̸��� �����ϴ�.");
		}
	}
}

