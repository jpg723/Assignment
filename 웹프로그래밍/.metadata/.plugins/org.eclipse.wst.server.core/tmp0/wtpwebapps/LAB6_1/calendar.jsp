<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
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
	}
	
	td, th{
		border: 0.5px solid black;
	}
</style>
</head>
<body>
	<%
		String week[] = {"월", "화", "수", "목", "금", "토", "일"};
		String color[] = {"red", "black", "blck","green", "black", "black","blue"};
		out.println("<div align = 'center'>");
		out.println("<table>");
		out.println("<tr>");
		
		for(int i = 0; i < 7; i++){
			out.println("<th style='color:" + color[i] +" ;'>" + week[i] + "</th>");
		}
		
		for(int i = 0; i < 4; i++){
			out.println("<tr>");
			
			for(int j = 0; j < 7; j++){
				out.println("<td align='center'>" + "&nbsp;" + "</td>");
			}
			out.println("</tr>");
		}
		
		out.println("</table>");
	%>

</body>
</html>