import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);		
		int i;
		String title;
		String author;
		
		Book [] b = new Book[2];
		
		for(i = 0; i < b.length; i++) {
			System.out.print("����>> ");
			title = sc.nextLine();
			System.out.print("����>> ");
			author = sc.nextLine();
			b[i] = new Book(title, author);
		}
		
		for(i = 0; i < b.length; i++) {
			System.out.println("(" + b[i].title + ", " + b[i].author + ")");
		}
	}

}
