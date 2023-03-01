
class Bus extends Student{
	int busNumber, passengerCount, money;
	
	public Bus(String name, int money, int b, int p, int m) {
		super(name, money);
		this.busNumber = b;
		this.passengerCount = p;
		this.money = m;
	}
    public int count() {
    	passengerCount++;
    	return passengerCount;
	}
	public int take() {
		return money * passengerCount;
	}
	public String showInfo() {
		return super.showInfo(getMoney() - money) + "\n버스 " + busNumber + "번의 승객은 " + count() + "명이고, 수입은 " + take() + "입니다.";
	}

}
