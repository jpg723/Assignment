import java.util.Scanner;

public class A3_4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		System.out.print("구하려는 범위의 숫자를 입력하세요: ");
		int num = sc.nextInt();  
		
		int count = 0;
		int sum = 0;
		
		for(int i = 0; i <= num; i++) {
			
			if(i % 3 == 0) {
				System.out.printf("%d\t", i);
				count++;
				sum += i;
				
				if(count % 5 == 0)
					System.out.println();
			}
		}
		
		System.out.println("\n0부터 " + num + "까지의 3의 배수 합: " + sum);
	}

}
