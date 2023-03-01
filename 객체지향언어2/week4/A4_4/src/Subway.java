
class Subway extends Student{
	int lineNumber, passengerCount, money;
	
	public Subway(String name, int money, int l, int p, int m) {
		super(name, money);
		this.lineNumber = l;
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
		return super.showInfo(getMoney() - money) + "\n" + lineNumber + "호선의 승객은 " + count() + "명이고, 수입은 " + take() + "입니다.";
	}

}
