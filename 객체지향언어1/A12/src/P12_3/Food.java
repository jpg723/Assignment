package P12_3;

public class Food {
	
	private int cal;
	private int cost;
	private int kg;
	
	public int getCal() {
		return cal;
	}
	
	public void setCal(int cal) {
		this.cal = cal;
	}
	
	public int getCost() {
		return cost;
	}
	
	public void setCost(int cost) {
		this.cost = cost;
	}
	
	public int getKg() {
		return kg;
	}
	
	public void setKg(int kg) {
		this.kg = kg;
	}
	
	public Food(int cal, int cost, int kg) {
		this.cal = cal;
		this.cost = cost;
		this.kg = kg;
	}

}
