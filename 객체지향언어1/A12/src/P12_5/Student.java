package P12_5;

public class Student {
	private int id;
	private int tuition;
	private double gpa;
	
	public void setId(int id) {
		this.id = id;
	}
	
	public int getId() {
		return id;
	}
	
	public void setTuition(int tuition) {
		this.tuition = tuition;
	}
	
	public int getTuition() {
		return tuition;
	}
	
	public void setGpa(double gpa) {
		this.gpa = gpa;
	}
	
	public double getGpa() {
		return gpa;
	}
	
	public Student() {
		this.id = 0;
		this.tuition = 0;
		this.gpa = 0;
	}
	
	public Student(int id, int tuition, double gpa) {
		this.id = id;
		this.tuition = tuition;
		this.gpa = gpa;
	}
	
	public int calcScholarship() {
		return 0;
	}
	
	public String toString() {
		return "id= " + id + " tuition= " + tuition + " gpa = " + gpa + " 장학금= " + calcScholarship();
	}

}
