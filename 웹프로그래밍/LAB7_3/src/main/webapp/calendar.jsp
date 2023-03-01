<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>calendar.jsp</title>
<style>
	table{
		border-collapse:collapse;
		width: 300px;
		height: 110px;
		border-style: hidden;
	}
	
	td, th{
		border-style: hidden;
	}
	
	h2 {
		text-align: left;
	}
</style>
</head>
<body>
<%
	int year = Integer.parseInt(request.getParameter("YEAR"));
	int month = Integer.parseInt(request.getParameter("MONTH"));
	
	int START_DAY_OF_WEEK = 0;
	int END_DAY_OF_WEEK = 0;
	int END_DAY = 0;
	
	Calendar sDay = Calendar.getInstance();
	Calendar eDay = Calendar.getInstance();
	
	sDay.set(year, month-1, 1);
	eDay.set(year, month, 1-1);
	
	START_DAY_OF_WEEK = sDay.get(Calendar.DAY_OF_WEEK);
	END_DAY_OF_WEEK  = eDay.get( Calendar.DAY_OF_WEEK);
	END_DAY = eDay.get(Calendar.DATE);
	
	out.println("<table width='800' border='1'>" );
	out.println("<tr>" );
	out.println("<h2>" + year + "년" + month + "월" + "</h2>");
	out.println("<hr>");
	out.println("</tr>" );

	for (int i = 2; i < START_DAY_OF_WEEK; i++) {
		out.print("<td></td>");
	}

	for(int i = 1, n = START_DAY_OF_WEEK - 1; i<=END_DAY ; i++, n++) {
		if(n % 7 == 1) 
			out.println("<tr>");
		
		out.print( "<td>" + i + "</td>" );
		
		if(n % 7 == 0) 
			out.println("</tr>");
	}
        
	for(int i=END_DAY_OF_WEEK ; i <= 6; i++) {
		out.println( "<td></td>" );
	}
	
	out.println( "</table>" );
%>
</body>
</html>