package A6_2;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		System.out.print("사각형의 가로를 입력: ");
		int width = sc.nextInt();
		System.out.print("사각형의 세로를 입력: ");
		int height = sc.nextInt();
		
		Rectangle r = new Rectangle(width, height);
		
		System.out.println("사각형의 넓이는 " + r.area(width, height) + "이다.");
	}

}
