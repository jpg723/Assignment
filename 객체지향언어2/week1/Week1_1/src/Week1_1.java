import java.util.Scanner;

public class Week1_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = 0;
		int count = -1;
		int sum = 0;
		double ave = 0;
		
		System.out.println("������ �Է��ϰ� �������� 0�� �Է��ϼ���");
		
		while(true){
			n = sc.nextInt();			
			count++;
			
			if (n == 0) {
				break;
			}
			sum += n;
		}
		ave = sum / count;
		
		System.out.println("�Է��� ���� ����: " + count);
		System.out.print("���: " + ave);

		
	}

}
