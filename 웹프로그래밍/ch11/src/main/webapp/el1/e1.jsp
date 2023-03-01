<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%
	request.setAttribute("jsp", "web programming language");
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>표현언어(EL)의 기본문법</h2>
	<p>jsp란 <b>${jsp}</b>
</body>
</html>