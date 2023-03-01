
public class Customer {
	protected int customerID; //고객 아이디
	protected String customerName; //고객 이름
	protected String customerGrade; //고객 등급
	int bonusPoint; // 보너스포인트
	double bonusRatio; // 보너스포인트 적립비율

	public Customer(int customerID, String customerName) {
		// 생성자
		this.customerID = customerID;
		this.customerName = customerName;
		
		customerGrade = "SILVER";
		bonusRatio = 0.01;

	}
	
	public int calcPrice(int price) { 
		// 제품에 대한 지불금액 반환, 보너스포인트 비율을 적용해 적립
		bonusPoint = (int) (price * bonusRatio);
		return price;
	}

	public String showCustomerInfo() {
		//고객 정보, 이름, 등급, 현재 적립된 포인트 출력
		return customerName + "님의 등급은  " + customerGrade + "이며, " 
				+ "보너스 포인트는 " + bonusPoint + "점 입니다.";
	}
	public String showCustomerAfterInfo() {
		//고객 정보, 이름, 등급, 현재 적립된 포인트 출력
		return customerName + "님의 등급은  " + customerGrade + "이며, " 
				+ "보너스 포인트는 " + bonusPoint + "점 입니다.";
	}

	public int getCustomerID() {
		return customerID;
	}
	public void setCustomerID(int customerID) {
		this.customerID = customerID;
	}
	public String getCustomerName() {
		return customerName;
	}
	public void setCustomerName(String customerName) {
		this.customerName = customerName;
	}
	public String getCustomerGrade() {
		return customerGrade;
	}
	public void setCustomerGrade(String customerGrade) {
		this.customerGrade = customerGrade;
	}


}
