import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		
		String magazine, page, author, date;
		
		System.out.print("���� �̸���? ");
		magazine = sc.nextLine();
		System.out.print("����������? ");
		page = sc.nextLine();
		System.out.print("���ڴ�? ");
		author = sc.nextLine();
		System.out.print("�߸�����? ");
		date = sc.nextLine();
		
		Book b = new Book(magazine, page, author);
		Magazine m = new Magazine(magazine, page, author, date);
		
		System.out.println("å �̸�: " + b.getMagazine());
		System.out.println("������ ��: " + b.getPage());
		System.out.println("����: " + b.getAuthor());
		System.out.println("�߸���: " + m.getDate());

	}

}
