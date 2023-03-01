interface Lendable {                 

	void checkOut(String aborrower,String date);
	void checkIn();

}
class CD {

	String registerNo;
	String title;

	CD(String registerNo, String title){

		this.registerNo = registerNo;
		this.title = title;
	}
}
class Book implements Lendable {

	String requestNo;
	String bookTitle;
	String writer;
	String borrower;
	String checkOutDate;
	int state;

	Book(String requestNo, String bookTitle, String writer){

		this.requestNo = requestNo;
		this.bookTitle = bookTitle;
		this.writer = writer;
	}

	public void checkOut(String borrower, String date) {            

		if (state != 0)
			return;

		this.borrower =borrower;
		this.checkOutDate = date;
		this.state = 1;

		System.out.println("* " + bookTitle + "��(��) ����Ǿ����ϴ�");
		System.out.println("������ : "+borrower);
		System.out.println("������: "+date+"\n");
	}

	public void checkIn() {                                                            

		this.borrower = null; 
		this.checkOutDate = null;
		this.state = 0;

		System.out.println("* "+bookTitle +"��(��) �ݳ��Ǿ����ϴ�. \n");
	}

}

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
		this.state =1;

		System.out.println("* " + title + " CD�� ����Ǿ����ϴ�.");
		System.out.println("������ : "+borrower);
		System.out.println("������: "+date+"\n");
	}

	public void checkIn() {

		this.borrower = null;
		this.checkOutDate = null;
		this.state = 0;

		System.out.println("* "+title +" CD�� �ݳ��Ǿ����ϴ�. \n");
	}

}