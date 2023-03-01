<!-- 20200997 이미지 chrome -->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "java.util.ArrayList" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>주소록</title>
</head>
<style>
div {
	text-align: center;
}

ol {
	display: inline-block;
}
</style>
<body>
<%
	request.setCharacterEncoding("UTF-8");
	String username = request.getParameter("username");
	String phone = request.getParameter("phone");
	
	@SuppressWarnings("unchecked")
	ArrayList<String> addbook=(ArrayList<String>)application.getAttribute("addbook");
	
	if(addbook == null){
		addbook = new ArrayList<String>();
		application.setAttribute("addbook", addbook);
	}
	
	if(username != null && phone != null){
		addbook.add(username + "," + phone);
	
		out.println("<div>");
		out.println("<h2>주소록</h2>");
		out.println("<hr>");
		out.println("<ol>");
		
		if(addbook != null){
			for(String addr: addbook){
				out.println("<li>" + addr + "</li>");
			}
		}
		
		out.println("</ol>");
		out.println("</div>");
	}
%>
</body>
</html>