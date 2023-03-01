<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.Calendar" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Calendar</title>
</head>
<body>
<%
	Calendar today = Calendar.getInstance();

	int year = today.get(Calendar.YEAR);
	int month = today.get(Calendar.MONTH) + 1;
	int date = today.get(Calendar.DATE);
%>
	<jsp:forward page="calendar.jsp">
	<jsp:param name="year" value="<%= year %>" />
	<jsp:param name="month" value="<%= month %>" />
	<jsp:param name="date" value="<%= date %>" />
	</jsp:forward>
</body>
</html>