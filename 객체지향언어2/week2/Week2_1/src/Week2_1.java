import java.util.Scanner;

public class Week2_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner (System.in);
		
		int n[] = new int[5];
		String name[] = new String[5];
		int sum = 0;
		int i = 0;
		
		System.out.print("������ �Է��ϼ���: ");
		
		for(i = 0; i < n.length; i++) {
			n[i] = sc.nextInt();
		}
		
		for(int N: n) {
			sum += N;
		}
		
		System.out.println("���� " + sum);
		
		System.out.print("�̸��� �Է��ϼ���: ");
		
		for(i = 0; i < name.length; i++) {
			name[i] = sc.next();
		}
		
		System.out.print("�Էµ� �̸��� ");
		
		for(String Name: name) {
			System.out.print(Name + " ");
		}
		

	}

}
