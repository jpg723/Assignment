
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Car myCar = new Car();

		System.out.println("* 4�� ��� �ѱ�Ÿ�̾� �ڵ��� ��ü* ");
		myCar.run();

		System.out.println("* �� ���� 2���� ��ȣŸ�̾�� ��ü�� ��* ");
		myCar.tires[0] = new KumhoTire();
		myCar.tires[1] = new KumhoTire();

		myCar.run();
	}


}
