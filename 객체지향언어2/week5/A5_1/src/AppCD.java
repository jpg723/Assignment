
class AppCD extends CD implements Lendable{

	String borrower;         
	String checkOutDate;    
	int state;                

	AppCD(String registerNo, String title) {
		super(registerNo,title);
	}
	
	public void checkOut (String borrower, String date){

		if (state != 0)
			return;

		this.borrower = borrower;
		this.checkOutDate = date;
		this.state = 1;

		System.out.println("** " + this.cdTitle + " CD�� ����Ǿ����ϴ�.");
		System.out.println("������ : "+ this.borrower);
		System.out.println("������: "+date+"\n");
	}

	public void checkIn() {

		this.borrower = null;
		this.checkOutDate = null;
		this.state = 0;

		System.out.println("** "+ cdTitle +" CD�� �ݳ��Ǿ����ϴ�. \n");
	}
}
