
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	    Customer customer1 = new Customer(10010, "�̼���");
	    customer1.bonusPoint = 1000;
			
	    //VIPCustomer Ŭ������ �����ϰ� customerKim ���� ������ �����մϴ�.
	    //VIPCustomer�� Customer�� ����߱� ������ 
	    //�� ���̵�, �� �̸��� �޼��带 ����� �� �ֽ��ϴ�.
	    Customer customer2 = new VIPCustomer(10020, "������", 0, 0, null);
	    customer2.bonusPoint = 10000;
			
	    System.out.println(customer1.showCustomerInfo());
	    System.out.println(customer2.showCustomerInfo()); 
	}

}