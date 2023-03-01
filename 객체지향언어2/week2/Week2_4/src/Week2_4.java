import java.util.Scanner;

public class Week2_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		Average ave = new Average();
		
		System.out.println("두 수의 평균 " + ave.getAverage(15, 15));
		System.out.println("세 수의 평균 " + ave.getAverage(15, 15, 60));

	}

}
