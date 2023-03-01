
public interface Tire{
	void roll();
}
class HankookTire implements Tire{
	public void roll() {
		System.out.println("한국 타이어가 굴러갑니다.");
	}
}
class KumhoTire implements Tire {
	public void roll() {
		System.out.println("금호 타이어가 굴러갑니다.");
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
