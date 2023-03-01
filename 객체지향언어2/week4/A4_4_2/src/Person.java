public class Person implements Comparable {
	// Person�� �̸�(name)�� Ű(height)�� �ʵ�� ������.
	public String name;
	public double height;

	public String getName() {
		return name;
	}
	public double getHeight() {
		return height;
	}
	public Person(String name, double height) {
		this.name = name;
		this.height = height;
	}

	public int compareTo(Object obj) {
		Person other = (Person) obj;
		if (height > other.height)
			return 1; 
		else if (height < other.height)
			return -1; 
		else
			return 0;
	}
	public String toString() {
		return "�̸�: " + name + ", height: " + height;
	}

}