import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		Lendable arr[] = new Lendable[3];
		arr[0] = new Book("863ó774��", "�¾��� �Ŀ� ", "�������� ");
		arr[1] = new Book("863ó774��", "������ ������ ", "�������� ");
		arr[2] = new AppCD("2016-7001", "Java Source");
		
		String name;
		String date;
		int i = 0;
		
		System.out.print("ȸ������ �Է��ϼ��� : ");
		name = sc.nextLine();
		System.out.print("�������ڸ� �Է��ϼ��� : ");
		date = sc.nextLine();
		System.out.print("\n");
		
		for(i = 0; i < arr.length; i++)
		{
			arr[i].checkOut(name, date);
			System.out.print("\n");
		}
	}

}
