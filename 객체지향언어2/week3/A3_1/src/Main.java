import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		int i;
		int n;
		String title, author;	
		String book;

		System.out.print("å�� �Ǽ�>> ");
		n = sc.nextInt();
		sc.nextLine();

		Book [] b = new Book[n];

		for(i = 0; i < b.length; i++) {
			System.out.print("����>> ");
			title = sc.nextLine();
			System.out.print("����>> ");
			author = sc.nextLine();
			b[i] = new Book(title, author);
		}

		for(i = 0; i < b.length; i++) {
			System.out.println(b[i].toString());
		}

		System.out.print("\nã������ å�� ������>> ");
		book = sc.nextLine();



		for(i = 0; i < b.length; i++) {
			if(book.equals(b[i].getTitle())) {
				System.out.println("���ڴ�>> " + b[i].getAuthor());
				break;
			}
		}

		if(i == b.length) {
			System.out.println("ã������ å�� �����ϴ�.");
		}
	}

}
