<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8" import="java.util.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Session Object 02</title>
</head>
<body>
<div>
<%
	request.setCharacterEncoding("UTF-8"); // euc-kr
	session.setAttribute("username",request.getParameter("username"));
%>
<%=session.getAttribute("username") %>님 환영 합니다.<BR><BR>
세션 ID : <%= session.getId() %> <BR>
세션 유지시간 : <%= session.getMaxInactiveInterval() %> <BR><BR>
</div>
</body>
</html>