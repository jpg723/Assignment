import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);

		int i;
		int n;
		String title, author;	
		String book;

		System.out.print("책의 권수>> ");
		n = sc.nextInt();
		sc.nextLine();

		Book [] b = new Book[n];

		for(i = 0; i < b.length; i++) {
			System.out.print("제목>> ");
			title = sc.nextLine();
			System.out.print("저자>> ");
			author = sc.nextLine();
			b[i] = new Book(title, author);
		}

		for(i = 0; i < b.length; i++) {
			System.out.println(b[i].toString());
		}

		System.out.print("\n찾으려는 책의 제목은>> ");
		book = sc.nextLine();



		for(i = 0; i < b.length; i++) {
			if(book.equals(b[i].getTitle())) {
				System.out.println("저자는>> " + b[i].getAuthor());
				break;
			}
		}

		if(i == b.length) {
			System.out.println("찾으려는 책이 없습니다.");
		}
	}

}
