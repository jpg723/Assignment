<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>로그인 성공</title>
</head>
<body>

<%
        request.setCharacterEncoding("utf-8");
        String id = request.getParameter("id");
        String pw = request.getParameter("pw");
        String url = "";
        String msg = "";
	
        if(id.equals("admin") && pw.equals("1234"))
        	url = "main.jsp";
        else {
        	msg = "Enter the id('admin') and password('1234')";
        	url = "login_form.jsp";    
        }
%>
<jsp:forward page="<%= url %>">
<jsp:param name="msg" value="<%= msg %>" />
</jsp:forward>
</body>
</html>