import java.util.ArrayList;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Customer customer1 = new Customer(10010, "이순신");
		Customer customer2 = new Customer(10020, "심사임당");
		Customer customer3 = new GoldCustomer(10030, "홍길동", 0, 0, null);
		Customer customer4 = new GoldCustomer(10040, "이율곡", 0, 0, null);
		Customer customer5 = new VIPCustomer(10050, "김유신", 0, 0, null, 12345);

		ArrayList<Customer> customerList = new ArrayList<Customer>();
		customerList.add(customer1);
		customerList.add(customer2);
		customerList.add(customer3);
		customerList.add(customer4);
		customerList.add(customer5);

		System.out.println("=========== 고객정보출력 ===========");
		for(Customer customer : customerList) {
			System.out.println(customer.showCustomerInfo());
		}

		System.out.println("=============== 할인율과 보너스 포인트 계산 ===========");
		int price = 10000;
		
		for(Customer customer : customerList) {
			int afterPrice = customer.calcPrice(price);
			
			System.out.println(customer.getCustomerName() + " 님이 현재 " + afterPrice + "원 지불하셨습니다.");
			System.out.println(customer.showCustomerAfterInfo());
		}

	}

}