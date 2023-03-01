import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int[] score = new int[3];
		int sum = 0, i;
		double average;

		Scanner sc = new Scanner(System.in);

		try {

			System.out.print("점수를 입력하세요>> ");
			for(i = 0; i < score.length; i++) {
				score[i] = sc.nextInt();
				
				if(score[i] < 0) {
					throw new NegativeNumberException();
				}
			}
			
			
			for(i = 0; i < score.length; i++) {
				sum += score[i];
			}
			
			average = sum / score.length;

			System.out.println("평균은 " + average + "입니다.");
			
		}
		catch (NegativeNumberException e){
			System.out.print(e.toString());
		}

	}
}
