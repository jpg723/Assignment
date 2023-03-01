import java.util.Scanner;

public class Week1_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = 0;
		int count = -1;
		int sum = 0;
		double ave = 0;
		
		System.out.println("정수를 입력하고 마지막에 0을 입력하세요");
		
		while(true){
			n = sc.nextInt();			
			count++;
			
			if (n == 0) {
				break;
			}
			sum += n;
		}
		ave = sum / count;
		
		System.out.println("입력한 수의 개수: " + count);
		System.out.print("평균: " + ave);

		
	}

}
