package A4_1;

import java.util.Scanner;

public class A4_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		int num = 0, count = 0;
		int answer = (int) (Math.random() * 101);
		
		do {
			System.out.print("정답을 추측하여 보세요: ");
			num = sc.nextInt();
			
			count++;
			
			if(answer > num)
				System.out.println("LOW");
			
			else if(answer < num)
				System.out.println("HIGH");
			
		}while(answer != num);
		
		System.out.println("축하합니다. 시도횟수 = " + count);
	}
}
