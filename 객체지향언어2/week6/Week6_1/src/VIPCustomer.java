
public class VIPCustomer extends Customer{
	private int agentID;
	double saleRatio;

	public VIPCustomer(int customerId, String custoemrName, double saleRatio, double bonusRatio,String customerGrade) {
		super(customerId, custoemrName);

		saleRatio = 0.1;
		bonusRatio = 0.05;
		customerGrade = "VIP";

		this.saleRatio = saleRatio;
		this.bonusRatio = bonusRatio;
		this.customerGrade = customerGrade;

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

}
