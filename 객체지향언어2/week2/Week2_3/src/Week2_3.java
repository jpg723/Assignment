import java.util.Scanner;

public class Week2_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int i;
		int random = 0;
		int sum = 0;
		int ave = 0;

		System.out.println("random()���� �߻��� ��: ");
		
		for(i = 1; i <= 100; i++) {
			random = (int)(Math.random() * 100 + 1);
			System.out.print(" " + random);
			
			if(i % 10 == 0)	{
				System.out.println();
			}
			sum += random;
			ave = sum / 100;
		}
		
		System.out.println("�հ�: "+ sum);
		System.out.println("���: "+ ave);
	
	}

}
