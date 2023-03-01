import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

class Controller {
	ArrayList<Phone> tel;
	FileWriter fw;
	Scanner sc;
	FileReader fr;

	public Controller() throws IOException {

		tel = new ArrayList<Phone>();
		sc = new Scanner(System.in);
	}

	void input(FileWriter fw) throws IOException {

		if(tel.size() == 0) {// ArrayList ���� tel�� ũ�Ⱑ 0�̸� ����		
			String opn1 = "����ڹ�ȣ"+"�̸�"+"\t\t"+"��ȭ��ȣ"+"\t\t"+"�ּ�"+"\r\n";
			//���ڿ� ���� opn1�� ���� ���ڿ� ����
			tel.add(new Phone(0, "�̸�","��ȭ��ȣ","�ּ�"));
			//ArrayList ���� tel�� ����Ʈ �߰� Phone ��ü�� �����ؼ� �߰� 
			fw.write(opn1); 
			// FileWrite�� ���� fw�� �̿��� write �Լ� ȣ�� ���Ͽ� ���ڿ� ����
		}

		System.out.print("����� ��ȣ�� �Է��ϼ���>>");
		int idNum = sc.nextInt();
		System.out.print("����� �̸��� �Է��ϼ���>>");
		String name = sc.next(); 
		System.out.print("����� ��ȭ��ȣ�� �Է��ϼ���>>");
		String number = sc.next(); 
		System.out.print("����� �̸����� �Է��ϼ���>>"); 
		String address=sc.next(); 

		tel.add(new Phone(idNum,name,number,address)); 

		String tatal = idNum + "\t\t" + name + "\t\t" + number + "\t\t" + address + "\r\n";
		fw.write(tatal);
		fw.close();
	}
	void search() {

		System.out.print("�˻��� ����� ��ȣ�� �Է��ϼ���>>");
		int search = sc.nextInt(); 
		boolean check = false;
		int index = -1;

		for(int i = 0;i < tel.size();i++) {

			if(tel.get(i).idNum == search) {
				index = i; // ���� index�� i�� ����
				check = true; // ���� check�� true ����
			}
		}

		if(check == true) {
			System.out.println("�����" + search + "��  ��ȭ��ȣ��" + tel.get(index).phoneNumber + "�Դϴ�.");
		}
		else {
			System.out.println("�˻������ �����ϴ�.");//���
		}
	}

	public void input() {

		System.out.print("����� ��ȣ�� �Է��ϼ���>>");
		int idNum = sc.nextInt();
		System.out.print("����� �̸��� �Է��ϼ���>>");
		String name = sc.next(); 
		System.out.print("����� ��ȭ��ȣ�� �Է��ϼ���>>");
		String number = sc.next(); 
		System.out.print("����� �̸����� �Է��ϼ���>>"); 
		String address=sc.next(); 

		tel.add(new Phone(idNum,name,number,address)); 
		
	}

}