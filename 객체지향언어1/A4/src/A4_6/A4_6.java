package A4_6;

import java.util.Scanner;

public class A4_6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		int length = 0, score = 0, sum = 0;
		double average = 0;
		
		System.out.print("성적을 입력받는 학생의 수는? : ");
		length = sc.nextInt();
		
		for(int i = 0; i < length; i++) {
			
			System.out.print((i + 1) + "번째 학생의 성적을 입력하세요: ");
			score = sc.nextInt();
			
			sum += score;
			average = sum / length;
		}
		
		System.out.println("합계 : " + sum);
		System.out.println("평균 : " + average);
	}
}
