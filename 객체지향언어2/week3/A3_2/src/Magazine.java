
class Magazine extends Book{
	
	String date;
	
	public Magazine(String magazine, String page, String author, String date) {
		super(magazine, page, author); 
		this.date = date;
	}
	
	public String getDate() {
		return date;
	}
	public void setDate(String d) {
		date = d;
	}
}
