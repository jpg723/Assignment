<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB6_3</title>
</head>
<body>
	<%
		Calendar cal = Calendar.getInstance();
	
		int year = cal.get(Calendar.YEAR);
		int month = cal.get(Calendar.MONTH) + 1;
		int date = cal.get(Calendar.DATE);
		int day = cal.get(Calendar.DAY_OF_WEEK); 
		String strDayOfWeek = "";
		
		switch(day){
			case 1:
				strDayOfWeek = "일요일";
		        break;
		    case 2:
		        strDayOfWeek = "월요일";
		        break;
		    case 3:
		        strDayOfWeek = "화요일";
		        break;
		    case 4:
		        strDayOfWeek = "수요일";
		        break;
		    case 5:
		        strDayOfWeek = "목요일";
		        break;
		    case 6:
		        strDayOfWeek = "금요일";
		        break;
		    case 7:
		        strDayOfWeek = "토요일";
		        break;
		}
		
		out.println("오늘은 " + year + "년 " + month + "월 " + date + "일 " + strDayOfWeek + "입니다<p>");
		
		int start = cal.getMinimum(Calendar.DATE); //현재 기준 월의 시작하는 날
		int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH); //현재 기준 월의 마지막 날
		out.println("이번달은 " + start + "일부터 시작하여 " + end + "일에 끝납니다<p>");
		
		cal.set(Calendar.YEAR, 2020);
		cal.set(Calendar.MONTH, Calendar.JANUARY);
		cal.set(Calendar.DATE, 23);
		
		day = cal.get(Calendar.DAY_OF_WEEK);
		
		switch(day){
		case 1:
			strDayOfWeek = "일요일";
	        break;
	    case 2:
	        strDayOfWeek = "월요일";
	        break;
	    case 3:
	        strDayOfWeek = "화요일";
	        break;
	    case 4:
	        strDayOfWeek = "수요일";
	        break;
	    case 5:
	        strDayOfWeek = "목요일";
	        break;
	    case 6:
	        strDayOfWeek = "금요일";
	        break;
	    case 7:
	        strDayOfWeek = "토요일";
	        break;
		}
			
		out.println("코로나 시작은 " + cal.get(Calendar.YEAR) + "년 " + (cal.get(Calendar.MONTH) + 1) + "월 " + cal.get(Calendar.DATE) + "일 " + strDayOfWeek + "입니다");
	%>
</body>
</html>