package P12_5;

class Undergraduate extends Student{
	private int year;
	
	public Undergraduate() {
		super();
		this.year = 0;
	}
	public Undergraduate(int id, int tuition, double gpa, int year) {
		super(id, tuition, gpa);
		this.year = year;
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public int getYear() {
		return year;
	}
	
	public int calcScholarship() {
		
		if(super.getGpa() >= 3.0)
			return (int) (super.getTuition() * 0.5);
		
		else
			return (int) (super.getTuition() * 0.1);
	}
	
	public String toString() {
		return super.toString() + " 학년= " + year;
		
	}

}
