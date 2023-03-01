
class Student {
	String name;
	int money;
	
	public Student(String name, int money) {
		this.name = name;
		this.money = money;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getMoney() {
		return money;
	}
	public void setMoney(int money) {
		this.money = money;
	}
	public int takeBus() {
		money = 1000;
		return money;
	}
	public int takeSubway() {
		money = 1500;
		return money;
	}
	public String showInfo(int money) {
		return name + "¥‘¿« ≥≤¿∫ µ∑¿∫ " + money +"¿‘¥œ¥Ÿ.";
	}

}
