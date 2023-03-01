package A11_2;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bread b1 = new Bread("도넛", 2000, 3);
		Drink d1 = new Drink("콜라", 1500, "small");
		
		System.out.println(b1);
		System.out.println("수량: " + b1.getNum());
		System.out.println("**********");
		System.out.println(d1);
		System.out.println("사이즈: " + d1.getSize());
	}

}
