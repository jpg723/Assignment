package labhw11;

public class LoginBean {
	// 프로퍼티
	private String id;
	private String pw;
	private String gender;
	private String email;
	private String birth;

	//getter / setter 메서드
	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getPw() {
		return pw;
	}

	public void setPw(String pw) {
		this.pw = pw;
	}

	public String getGender() {
		return gender;
	}

	public void setGender(String gender) {
		this.gender = gender;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getBirth() {
		return birth;
	}

	public void setBirth(String birth) {
		this.birth = birth;
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