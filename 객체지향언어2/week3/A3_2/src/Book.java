
public class Book {
	String magazine;
	String page;
	String author;
	
	public Book(String magazine, String page, String author) {
		this.magazine = magazine;
		this.page = page;
		this.author = author;
	}
	public String getMagazine() {
		return magazine;
	}
	public void setMagazine(String m) {
		magazine = m;
	}
	public String getPage() {
		return page;
	}
	public void setPage(String p) {
		page = p;
	}
	public String getAuthor() {
		return author;
	}
	public void setAuthor(String a) {
		author = a;
	}

}
