
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
		return "Melon�� ����\nĮ�θ�: " + super.getCal() + "\n����: " + super.getCost()  + "\n�߷�: " + super.getKg() + "\n����: " + info;
	}

}
