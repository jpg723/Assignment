<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib tagdir="/WEB-INF/tags" prefix="ddwutag" %>
<%request.setCharacterEncoding("utf-8");%>
<!DOCTYPE HTML>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>LAB12_2: 커스텀 태그</title>
</head>
<body>
<%		
	String id = request.getParameter("id");
	session.setAttribute("id", id);
%>
	<ddwutag:greeting color="green" /><br>
	<ddwutag:greeting color="blue" />
</body>
</html>