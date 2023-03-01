
class Melon extends Food{
	private String info;
	
	public Melon(int cal, int cost, int kg, String i) {
        super(cal, cost, kg);
		info = i;
	}
	public String getInfo() {
		return info;
	}
	public void setInfo(String i) {
		info = i;
	}
	public String toString() {
		return "Melon의 정보\n칼로리: " + super.getCal() + "\n가격: " + super.getCost()  + "\n중량: " + super.getKg() + "\n정보: " + info;
	}

}
