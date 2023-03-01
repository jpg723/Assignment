interface Lendable {                 

	void checkOut(String aborrower,String date);
	void checkIn();

}
class CD {

	String registerNo;
	String cdTitle;

	CD(String registerNo, String cdTitle){

		this.registerNo = registerNo;
		this.cdTitle = cdTitle;
	}
}
