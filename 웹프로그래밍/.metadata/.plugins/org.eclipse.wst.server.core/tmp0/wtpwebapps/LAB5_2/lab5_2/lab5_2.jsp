<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>LAB5_2</title>
</head>
<body>
	<%
	
	String s = "Hello, Welcome to World! Let's go!";
	String t = "JSP";
	
	for(int i = 0; i < 17; i++)
		out.println(s.charAt(i));
	
	out.println("<br>문자열 길이: " + s.length());
	%>
</body>
</html>