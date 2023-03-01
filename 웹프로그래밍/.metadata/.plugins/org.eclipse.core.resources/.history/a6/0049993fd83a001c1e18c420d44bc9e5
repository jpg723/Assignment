<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB6_4</title>
<style>
	table {
		width: 500px;
	}
	table, tr, td{
		border-style: hidden;
	}
</style>
</head>
<body>
<%
	Calendar cal = Calendar.getInstance();

	int year = 2020;
	int month = 2;
	
	out.println("<h2>" + year + "년 " + month + "월</h2>");
	out.println("<hr>");
	
	cal.set(Calendar.YEAR, year);
	cal.set(Calendar.MONTH, month - 1);
	cal.set(Calendar.DATE, 1);

	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	int day = cal.get(Calendar.DAY_OF_WEEK);
	
	out.println("<div>");
	
	for(int i = 1; i < day; i++){
		out.println("<span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span>");
	}

	for(int i = 1; i <= end; i++){
		if(i <= 9)
			out.println("&nbsp;&nbsp;&nbsp;" + i);
		else
			out.println("&nbsp;" + i);
		if(day % 7 == 0)
			out.println("<br>");
		
		day++;
	}
	out.println("</div>");
	
%>

</body>
</html>