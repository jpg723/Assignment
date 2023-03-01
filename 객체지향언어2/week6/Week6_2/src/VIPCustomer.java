
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
		return super.showCustomerInfo() + " ��� ����� ��ȣ�� " + agentID + "�Դϴ�";
	}
	public String showCustomerAfterInfo() {
		return customerName + "���� �����  " + customerGrade + "�̸�, " 
				+ "���ʽ� ����Ʈ�� " + bonusPoint + "�� �Դϴ�.";
	}

}
