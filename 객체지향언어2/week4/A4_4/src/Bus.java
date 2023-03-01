
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
		return super.showInfo(getMoney() - money) + "\n���� " + busNumber + "���� �°��� " + count() + "���̰�, ������ " + take() + "�Դϴ�.";
	}

}
