package finalBean;

public class LoginBean {

	private String id;
	private String birth;
	private String fruit;
	private String color;

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getBirth() {
		return birth;
	}

	public void setBirth(String birth) {
		this.birth = birth;
	}
	
	public String getFruit() {
		return fruit;
	}

	public void setFruit(String fruit) {
		this.fruit = fruit;
	}
	
	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}
	

	public boolean isGrownUp() {
		
		String[] dArray = birth.split("-");
		int num1 = 0, num2 = 0, age;
		
		for(int i = 0;i < dArray.length;i++) {
			
			System.out.println(dArray[i]);
			
			if(i == 2) {
				num1 = Integer.parseInt(dArray[i]);
				num1 = num1 * 10;
			}
			
			else if(i == 3) {
				num2 = Integer.parseInt(dArray[i]);
			}				
		}
		
		age = num1 + num2;
		
		if(age >= 20)
			return true;
		else
			return false;	
	
	}
}