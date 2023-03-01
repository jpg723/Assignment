package A12_1;

class SalariedEmployee extends Employee{
	
	private int monthly;
	
	public SalariedEmployee(String name, int id, int monthly) {
		super(name, id);
		this.monthly = monthly;
	}
	
	public void setMonthly(int monthly) {
		this.monthly = monthly;
	}
	
	public int getMonthly() {
		return monthly;
	}
	
	public int computeSalary(){
		return monthly * 12; 
	}
	
	public String toString() {
		return super.toString() + "의 연봉은 " + computeSalary();
	}
}
