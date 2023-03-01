<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<h2>EL의 Empty</h2>
	<!-- id속성이 없으면 true, 있으면 false 반환 -->
	id의 요청 여부 : <b>${empty param.id }</b><br/>
	
	<a href="el_empty_2.jsp?id=jsp">name값이 있는 요청</a> ||
	<a href="el_empty_2.jsp">name값이 없는 요청</a>
</body>
</html>