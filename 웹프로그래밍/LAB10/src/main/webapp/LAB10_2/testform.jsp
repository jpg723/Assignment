<!-- 20200997 이미지 chrome -->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>주소록 입력</title>
</head>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	String username = (String)session.getAttribute("username");
	String phone = (String)session.getAttribute("phone");
%>
<div>
	<form name="form1" method="POST" action="add.jsp">
		이름: <input type="text" name="username">
		전화번호: <input type="text" name="phone">
		<input type="submit" value="등록">
	</form>
</div>
</body>
</html>