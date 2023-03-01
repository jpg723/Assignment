<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@page import="java.util.Enumeration"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>page_control_04.jsp</title>
</head>
<body>
<div>
	<%
		Enumeration<String> e = request.getParameterNames();
	
		out.println(request.getParameter("src") + "에서 전달된 내용입니다.<br>");
		out.println("page_control_04.jsp에서 출력합니다.");
		out.println("<hr>");
		out.println("넘겨받는 파라미터들<br>");
	
		while (e.hasMoreElements()) {
			
			String s = e.nextElement();
			out.println(s + " : " + request.getParameter(s) + "<br>");
		}
		
		out.println("<hr>");
		out.println("안녕하세요 " + request.getParameter("username") + "님, 반갑습니다.");	
	%>
</div>
</body>
</html>