package A11_2;

class Bread extends Food{
	int num;
	
	public Bread(String name, int price, int num) {
		super(name, price);
		this.num = num;
	}
	
	public int getNum() {
		return num;
	}
	
	public void setNum(int num) {
		this.num = num;
	}
}
