
class Student implements Comparable{
	private String name;
	private int id;
	
	public Student(String n, int i) {
		name = n;
		id = i;
	}
	public String getName() {
		return name;
	}
	public int getId() {
		return id;
	}
	public int compareTo(Object obj) {
		Student other = (Student) obj;
		
		if(id < other.id)
			return -1;
		else if(id > other.id)
			return 1;
		else
			return 0;
	}

}
