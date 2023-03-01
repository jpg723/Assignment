
public interface Tire{
	void roll();
}
class HankookTire implements Tire{
	public void roll() {
		System.out.println("�ѱ� Ÿ�̾ �������ϴ�.");
	}
}
class KumhoTire implements Tire {
	public void roll() {
		System.out.println("��ȣ Ÿ�̾ �������ϴ�.");
	}
}

class Car {
	Tire[] tires = {
			new HankookTire(),
			new HankookTire(),
			new HankookTire(),
			new HankookTire()
	};

	void run() {
		for(Tire tire : tires) {
			tire.roll();
		}
	}
}
