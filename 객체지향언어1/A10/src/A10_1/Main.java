package A10_1;

import java.util.Scanner;

public class Main {

	@SuppressWarnings("resource")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		Movie m[] = new Movie[2];
		String title;
		String director;
		
		for(int i = 0; i < m.length; i++) {
			System.out.print("영화제목: ");
			title = sc.nextLine();
			System.out.print("영화감독: ");
			director = sc.nextLine();
			
			m[i] = new Movie(title, director);
		}
		
		for(int i = 0; i < m.length; i++) {
			System.out.println(m[i].toString());
		}

	}

}
