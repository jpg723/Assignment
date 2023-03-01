package ch07;

import java.util.ArrayList;
import java.util.List;

public class AddrManager {
	List<AddrBean> addressList = new ArrayList<AddrBean>();
	
	public void add(AddrBean ab) {
		addressList.add(ab);
	}
	
	public List<AddrBean> getAddrList(){
		return addressList;
	}
	
	public AddrBean getAddr(String username) {
		for(AddrBean ab:addressList) {
			if (ab.getUsername().equals(username))
				return ab;
		}
		return null;
	}
	
}
