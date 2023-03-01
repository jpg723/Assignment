
public class VIPCustomer extends Customer{
	private int agentID;
	double saleRatio;

	public VIPCustomer(int customerId, String custoemrName, double saleRatio, double bonusRatio,String customerGrade, int agentID) {
		super(customerId, custoemrName);

		saleRatio = 0.1;
		bonusRatio = 0.05;
		customerGrade = "VIP";


		this.saleRatio = saleRatio;
		this.bonusRatio = bonusRatio;
		this.customerGrade = customerGrade;
		this.agentID = agentID;
	}

	public int calcPrice(int price) {
		bonusPoint += price * bonusRatio;
		return price - (int)(price * saleRatio);
	}
	public int getAgentID() {
		return agentID;
	}
	public void setAgentID(int agentID) {
		this.agentID = agentID;
	}
	public String showCustomerInfo() {
		return super.showCustomerInfo() + " 담당 상담자 번호는 " + agentID + "입니다";
	}
	public String showCustomerAfterInfo() {
		return customerName + "님의 등급은  " + customerGrade + "이며, " 
				+ "보너스 포인트는 " + bonusPoint + "점 입니다.";
	}

}
