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
		width: 450px;
	}  
	
	table, tr, td{
		border-collapse: collapse;
		border: 0.5px solid black;
	}
	
	td {
		width: 35px;
	}
	table.c{
		text-align: center;
	}
</style>
</head>
<body>
<%
	Calendar cal = Calendar.getInstance();
	int year = 2021;
	int month = 10;
	String[] arrWeek = {"일","월","화","수","목","금","토"};

	cal.set(Calendar.YEAR, year);
	cal.set(Calendar.MONTH, month - 1);
	cal.set(Calendar.DATE, 4);
	
	int end = cal.getActualMaximum(Calendar.DAY_OF_MONTH);
	int day = cal.get(Calendar.DAY_OF_WEEK);

	out.println("<table class=c>" );
	
	out.println("<tr>" );
	for (int i = 0; i < arrWeek.length; i++){
	
		if(i % 7 == 0)
			out.print("<td class= c2>" + arrWeek[i] + "</td>");
		
		else if(i % 6 == 0)
			out.print("<td class= c1>" + arrWeek[i] + "</td>");
		
		else
			out.print("<td class= c3>"+ arrWeek[i] + "</td>");
		
	}		
	out.println("</tr>" );
	
	for(int j = 1; j < day; j++){
		out.println("<td></td>");
	}

	for(int i = 1; i < end; i++){
		
		if(i % 7 == 6)
			out.println("<td style='color: blue'>" + i + "</td>");
		
		else if(i % 7 == 0)
			out.println("<td style='color: red'>" + i + "</td>");
		
		else if(i % 7 == 2)
			out.println("<td style='color: red'>" + i + "(휴무)" + "</td>");
		
		else
			out.println("<td style='color: black'>" + i + "</td>");
		
		if(day % 7 == 0){			
			out.println("<tr></tr>");		
		}
		day++;
	}
	
	for(int j = 1; j < 5; j++){
		out.println("<td></td>");
	}
	
	out.println("</table>");
%>

</body>
</html>