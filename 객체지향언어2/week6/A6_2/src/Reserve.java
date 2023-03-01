import java.util.Scanner;

class Reserve extends Print {
	Scanner sc = new Scanner(System.in);

	int[] seats = new int[5];
	boolean flag = true;

	void reserve() {

		while(true) {
			flag = true;
			for(int j = 0; j < seats.length; j++) {
				if(seats[j] != 1) {
					flag = false;
				}
			}
			if(flag == true) {
				System.out.println("�����Դϴ�.");
				break;
			}

			System.out.print("�����Ϸ��� �¼���ȣ�� �Է��ϼ��� : ");
			int s = sc.nextInt();

			if(seats[s - 1] == 0) { //������ �ȵ� ��� 0���� ǥ��
				seats[s - 1] = 1; //����� �¼��� 1�� �ٲ�
				System.out.println("����Ǿ����ϴ�.");
			}

			else { //����� ��� ����
				System.out.println("�̹� ���� �� �ڸ��Դϴ�.");
			}
		}
	}

}
