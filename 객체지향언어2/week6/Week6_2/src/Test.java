import java.util.ArrayList;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Customer customer1 = new Customer(10010, "�̼���");
		Customer customer2 = new Customer(10020, "�ɻ��Ӵ�");
		Customer customer3 = new GoldCustomer(10030, "ȫ�浿", 0, 0, null);
		Customer customer4 = new GoldCustomer(10040, "������", 0, 0, null);
		Customer customer5 = new VIPCustomer(10050, "������", 0, 0, null, 12345);

		ArrayList<Customer> customerList = new ArrayList<Customer>();
		customerList.add(customer1);
		customerList.add(customer2);
		customerList.add(customer3);
		customerList.add(customer4);
		customerList.add(customer5);

		System.out.println("=========== ��������� ===========");
		for(Customer customer : customerList) {
			System.out.println(customer.showCustomerInfo());
		}

		System.out.println("=============== �������� ���ʽ� ����Ʈ ��� ===========");
		int price = 10000;
		
		for(Customer customer : customerList) {
			int afterPrice = customer.calcPrice(price);
			
			System.out.println(customer.getCustomerName() + " ���� ���� " + afterPrice + "�� �����ϼ̽��ϴ�.");
			System.out.println(customer.showCustomerAfterInfo());
		}

	}

}