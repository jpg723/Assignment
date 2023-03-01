import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String magazine, page, author, date;
		
		System.out.print("잡지 이름은? ");
		magazine = sc.nextLine();
		System.out.print("페이지수는? ");
		page = sc.nextLine();
		System.out.print("저자는? ");
		author = sc.nextLine();
		System.out.print("발매일은? ");
		date = sc.nextLine();
		
		Book b = new Book(magazine, page, author);
		Magazine m = new Magazine(magazine, page, author, date);
		
		System.out.println("책 이름: " + b.getMagazine());
		System.out.println("페이지 수: " + b.getPage());
		System.out.println("저자: " + b.getAuthor());
		System.out.println("발매일: " + m.getDate());

	}

}
