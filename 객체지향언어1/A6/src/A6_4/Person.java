package A6_4;

public class Person {
	
	String name;
	float height;
	float weight;
	
	public Person() {
		
	}
	public Person(String name, float height, float weight) {
		this.name = name;
		this.height = height;
		this.weight = weight;
	}
	
	void print() {
		
		System.out.println("이름: " + name + ", 키: " + height + ", 몸무게: " + weight);
	}
}
