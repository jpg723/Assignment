package A12_1;

class HourlyEmployee extends Employee {
	
	private int rate;
	private int hours;
	
	public HourlyEmployee(String name, int id, int rate, int hours) {
		super(name, id);
		this.rate = rate;
		this.hours = hours;
	}
	
	public void setRate(int rate) {
		this.rate = rate;
	}
	
	public int getRate() {
		return rate;
	}
	
	public void setHours(int hours) {
		this.hours = hours;
	}
	
	public int getHours() {
		return hours;
	}
	
	public int computeSalary() {
		return rate * hours;
	}
	
	public String toString() {
		return super.toString() + "의 지급 급여는 " + computeSalary(); 
	}
}
