import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);

		String name;
		String date;
		int i = 0;
		Date d = new Date();
		SimpleDateFormat sdate = new SimpleDateFormat("yyyy-MM-dd-E HH:mm:ss",Locale.KOREA);
		
		System.out.print("�����Ϸ��� å�̳� CD�� ���ڴ� >> ");
		int n = sc.nextInt();
		Lendable [] arr = new Lendable[n];

		for(i = 0; i < arr.length; i++) {
			System.out.print("\nå�� �����ϸ� 1��, cd�� �����ϸ� 2���� �����ϼ��� >> ");
			int choice = sc.nextInt();
			sc.nextLine();
			
			if(choice == 1) {
				System.out.print("å�� û����ȣ>>");
			    String bookNum = sc.nextLine();
			    System.out.print("å ����>>");
			    String title = sc.nextLine();
			    System.out.print("å ����>>");
			    String author = sc.nextLine();
			    arr[i] = new Book(bookNum, title, author);
			}
			else if(choice == 2) {
				System.out.print("cd�� ��Ϲ�ȣ>>");
			    String cdNum = sc.nextLine();
			    System.out.print("cd ����>>");
			    String cd = sc.nextLine();
			    arr[i] = new AppCD(cdNum, cd);
			}
			
		}		
		System.out.print("\n�����ϴ� ����� �̸��� �Է��ϼ��� : ");
		name = sc.next();
		date = sdate.format(d);
		System.out.print("\n");

		for(i = 0; i < arr.length; i++)
		{
			arr[i].checkOut(name, date);
			System.out.print("\n");
		}
	}

}
