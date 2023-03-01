package P12_3;

class Melon extends Food{
	
	private String info;

	public Melon(int cal, int cost, int kg, String info) {
		super(cal, cost, kg);
		this.info = info;
	}
	
	public void setInfo(String info) {
		this.info = info;
	}
	
	public String getInfo() {
		return info;
	}
	
	public String toString() {
		return "Melon의 정보\n" + "칼로리 : " + super.getCal() + "\n가격 : " + super.getCost() + "\n중량 : " + super.getKg() + "\n정보 : " + info;
	}
	
}
