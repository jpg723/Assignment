<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@page import="java.util.Enumeration"%>
<% 
    request.setCharacterEncoding("UTF-8");
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>result.jsp</title>
</head>
<body>
	<h2>전달된 파라미터 이름들</h2>
	<%
		Enumeration<String> en = request.getParameterNames();
	 	String strName;

	 	while (en.hasMoreElements()) {
	  		strName= (String) en.nextElement();
	  		out.print(strName + "<br>");
		 }		
	%>
	<hr>  	  
    <%
   	 	String type= request.getParameter("type");
   		String id=request.getParameter("strID");
    	String pw=request.getParameter("strPwd"); 
    	
    	out.println("타입: "+ type + "<br>");
    	out.println("아이디: "+ id + "<br>");
    	out.println("비밀번호: "+ pw + "<br>");
    %>
</body>
</html>