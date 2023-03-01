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
		
		System.out.print("대출하려는 책이나 CD의 숫자는 >> ");
		int n = sc.nextInt();
		Lendable [] arr = new Lendable[n];

		for(i = 0; i < arr.length; i++) {
			System.out.print("\n책을 대출하면 1번, cd를 대출하면 2번을 선택하세요 >> ");
			int choice = sc.nextInt();
			sc.nextLine();
			
			if(choice == 1) {
				System.out.print("책의 청구번호>>");
			    String bookNum = sc.nextLine();
			    System.out.print("책 제목>>");
			    String title = sc.nextLine();
			    System.out.print("책 저자>>");
			    String author = sc.nextLine();
			    arr[i] = new Book(bookNum, title, author);
			}
			else if(choice == 2) {
				System.out.print("cd의 등록번호>>");
			    String cdNum = sc.nextLine();
			    System.out.print("cd 제목>>");
			    String cd = sc.nextLine();
			    arr[i] = new AppCD(cdNum, cd);
			}
			
		}		
		System.out.print("\n대출하는 사람의 이름은 입력하세요 : ");
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
