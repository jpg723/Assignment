package A11_2;

class Drink extends Food{
	
	String size;
	
	public Drink(String name, int price, String size) {
		super(name, price);
		this.size = size;
	}
	
	public void setSize(String size) {
		this.size = size;
	}
	
	public String getSize() {
		return size;
	}

}
