package A4_2;

import java.util.Scanner;

public class A4_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		@SuppressWarnings({ "unused", "resource" })
		Scanner sc = new Scanner(System.in);
		
		int sum = 0;
		
		for(int i = 1; i <= 100; i++) {
			
			if(i % 3 == 0 || i % 4 == 0)
				sum += i;
		}
		
		System.out.println("3 또는 4의 배수의 합= " + sum);
	}

}
