
public class GoldCustomer extends Customer{
	double saleRatio;

	public GoldCustomer(int customerId, String custoemrName, double saleRatio, double bonusRatio,String customerGrade) {
		super(customerId, custoemrName);

		saleRatio = 0.1;
		bonusRatio = 0.02;
		customerGrade = "GOLD";

		this.saleRatio = saleRatio;
		this.bonusRatio = bonusRatio;
		this.customerGrade = customerGrade;

	}

	public int calcPrice(int price) {
		bonusPoint += price * bonusRatio;
		return price - (int)(price * saleRatio);
	}

}
