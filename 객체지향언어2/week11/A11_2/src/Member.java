
public class Member implements Comparable<Member>{

	private String name;

	public Member(String name) {
		this.name = name;
	}

	public Member(String name1, String name2, String name3) {
		// TODO Auto-generated constructor stub
	}

	public String toString() {
		return "회원의 이름은 " + this.name + "입니다";
	}

	public int compareTo(Member m1) {
		return (this.name.compareTo(m1.name));
	}

}