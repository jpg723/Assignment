<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("utf-8"); %>
<jsp:useBean id="addr" class="ch07.AddrBean" />
<jsp:setProperty property="*" name="addr"/>
<jsp:useBean id="am" class="ch07.AddrManager" scope="application"/>
<%
	am.add(addr);
%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>addr_add.jsp</title>
</head>
<body>
<div align=center>
	<h1>등록내용</h1>
	이름 : <jsp:getProperty property="username" name="addr"/><br>
	전화번호 : <jsp:getProperty property="tel" name="addr"/><br>
	이메일 : <jsp:getProperty property="email" name="addr"/><br>
	성별: <%=addr.getGender() %>
	그룹: <%=addr.getGroup() %><br>
	<hr>
	<a href="addr_list.jsp">전체 목록보기</a>
	<a href="addr_list_group.jsp">그룹별 목록보기</a>
</div>
</body>
</html>