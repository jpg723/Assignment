<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>글자크기변화</title>
</head>
<body>
	<%
	String str = "Python";
	
	for(int i = 1; i <= 6; i++)
		out.println("<h" + i + ">" + str + "<br>");
	%>
</body>
</html>