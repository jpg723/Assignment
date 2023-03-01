
public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	    Customer customer1 = new Customer(10010, "이순신");
	    customer1.bonusPoint = 1000;
			
	    //VIPCustomer 클래스를 생성하고 customerKim 참조 변수에 대입합니다.
	    //VIPCustomer가 Customer를 상속했기 때문에 
	    //고객 아이디, 고객 이름의 메서드를 사용할 수 있습니다.
	    Customer customer2 = new VIPCustomer(10020, "김유신", 0, 0, null);
	    customer2.bonusPoint = 10000;
			
	    System.out.println(customer1.showCustomerInfo());
	    System.out.println(customer2.showCustomerInfo()); 
	}

}