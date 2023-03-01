
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bus b = new Bus("홍길동", 5000, 100, 0, 1000);
		Subway s = new Subway("이길동", 10000, 2, 0, 1500);
		
		System.out.println(b.showInfo());
		System.out.println(s.showInfo());

	}

}
