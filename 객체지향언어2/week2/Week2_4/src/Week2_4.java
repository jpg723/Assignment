import java.util.Scanner;

public class Week2_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		Average ave = new Average();
		
		System.out.println("�� ���� ��� " + ave.getAverage(15, 15));
		System.out.println("�� ���� ��� " + ave.getAverage(15, 15, 60));

	}

}
