
public class Member {
	private int num;
	private String id;
	private String name;

	public Member() {

	}

	public Member(int num, String id, String name) {
		super();
		this.num = num;
		this.id = id;
		this.name = name;

	}

	public int getNum()	{
		return num;
	}


	public void setNum(int num)	{
		this.num = num;
	}

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName()	{
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String toString() {
		return this.name + " 회원님의 아이디는 " + this.id + "입니다";
	}
}


