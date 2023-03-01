import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner sc = new Scanner(System.in);
		
		Lendable arr[] = new Lendable[3];
		arr[0] = new Book("863처774개", "태양의 후예 ", "베르베르 ");
		arr[1] = new Book("863처774개", "육룡이 나르샤 ", "베르베르 ");
		arr[2] = new AppCD("2016-7001", "Java Source");
		
		String name;
		String date;
		int i = 0;
		
		System.out.print("회원명을 입력하세요 : ");
		name = sc.nextLine();
		System.out.print("대출일자를 입력하세요 : ");
		date = sc.nextLine();
		System.out.print("\n");
		
		for(i = 0; i < arr.length; i++)
		{
			arr[i].checkOut(name, date);
			System.out.print("\n");
		}
	}

}
