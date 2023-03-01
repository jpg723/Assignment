import java.util.Scanner;

public class A2_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		@SuppressWarnings("resource")
		Scanner sc = new Scanner(System.in);
		
		int receive = 0, price = 0, vat, changes;
		
		System.out.print("받은 돈: ");
		receive = sc.nextInt();
		System.out.print("상품 가격: ");
		price = sc.nextInt();
		
		vat = (int) (price * 0.1);
		changes = receive - price;
		
		System.out.println("부가세: " + vat);
		System.out.println("잔돈: " + changes);
	}

}
