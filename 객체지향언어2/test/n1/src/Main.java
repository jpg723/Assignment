import java.util.Scanner;

public class Main {
	Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int select = -1;
		StuCont cont = new StuCont();
		Scanner sc = new Scanner(System.in);
		
		while(true){
			
			System.out.println("============= �������� ���α׷� =============");
			System.out.println("1.�л� �߰�\n2.�˻�\n3.������ ����(��������)\n4.�����뺰 ��� \n5.����");
			System.out.println("=======================================");
			System.out.print("�޴��� �����ϼ���: ");
			select = sc.nextInt();
			
			if(select == 1){
				cont.insert();
			}
			else if(select == 2){
				cont.serch();
			}
			else if(select == 5){
				System.out.println("���α׷��� ����˴ϴ�.");
				break;
			}
		}
	}
}