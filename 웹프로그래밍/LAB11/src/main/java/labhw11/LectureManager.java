package labhw11;
import java.util.ArrayList;
import java.util.List;

public class LectureManager{
	ArrayList<LectureBean> lectureList = new ArrayList<LectureBean>();
	
	public List<LectureBean> getLectureList(){
		return lectureList;
	}
	
	public void add(LectureBean lbean) {
		if(lbean.getType() != -1 && lbean.getTitle() != -1 && lbean.getDay() != -1 && lbean.getTime() != -1 && lbean.getConsecutive() != -1) 
			lectureList.add(lbean);
	}
	
}