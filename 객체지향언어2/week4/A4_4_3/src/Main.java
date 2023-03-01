
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Car myCar = new Car();

		System.out.println("* 4개 모두 한국타이어 자동차 객체* ");
		myCar.run();

		System.out.println("* 앞 바퀴 2개를 금호타이어로 교체한 후* ");
		myCar.tires[0] = new KumhoTire();
		myCar.tires[1] = new KumhoTire();

		myCar.run();
	}


}
