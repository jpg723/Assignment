<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Application Object 02</title>
</head>
<body>
<div>
<%
	request.setCharacterEncoding("UTF-8"); // euc-kr
	session.setAttribute("username",request.getParameter("username"));
	Integer count = (Integer)application.getAttribute("count");
	int cnt = count.intValue() + 1;
	application.setAttribute("count", cnt);
%>
<%
	int t = Integer.parseInt(request.getParameter("time"));
	session.setMaxInactiveInterval(t);
	int time = session.getMaxInactiveInterval() * 60;
%>
<%=session.getAttribute("username") %>님 환영 합니다.<BR><BR>
세션 ID : <%= session.getId() %> <BR>
세션 유지시간 :<%= time %>초 <BR><BR>
오늘 접속자수: <%= cnt %>
</div>
</body>
</html>