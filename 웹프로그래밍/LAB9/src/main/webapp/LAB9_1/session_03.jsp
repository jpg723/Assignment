<!-- 20200997 컴퓨터학과 이미지 chrome -->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Session Object 03</title>
</head>
<body>
<%
	long lasttime = session.getLastAccessedTime() / 1000;
	long createdtime = session.getCreationTime() / 1000;
	long time = lasttime - createdtime;
	
	out.println("세션이 생성된 후 " + time + "초가 지났습니다.");
%>
</body>
</html>