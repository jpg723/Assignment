package N1;

import java.util.Scanner;

public class N1Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i = 0;
		int num;
		int sum = 0;
		Scanner sc = new Scanner(System.in);		
		System.out.print("숫자 입력 : ");
		num = sc.nextInt();

		while(true)  {
	           	
			i++;
			
			if(i % 3 == 0)
				sum += i;
			
			if(i == num)
				break;
		} 
		
		System.out.printf("1에서 %d 까지의 3의 배수의 합: %d", num, sum);
	}

}
