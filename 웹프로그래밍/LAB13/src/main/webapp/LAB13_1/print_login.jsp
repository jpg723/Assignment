<!-- 컴퓨터학과 20200997 이미지 / 크롬-->
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@page import="java.util.Enumeration"%>
<%@page import="java.util.*"%>
<% 
    request.setCharacterEncoding("UTF-8");
%>
<c:set var="id" value=id scope="page" /> 
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>result.jsp</title>
</head>
<body>
	<%
		ArrayList<String> names = new ArrayList<>();
		Enumeration<String> en = request.getParameterNames();
		String[] mChoices = {"hobby"};
		String[] hobbyNames = {"뉴스", "맛집", "책", "영화", "여행"};
		String[] telArea = {"010", "080", "070", "02"};
		String[] gNames = {"남", "여"};
		String hobby[] = request.getParameterValues("hobby");
		int length = 0;
		
	 	while (en.hasMoreElements()) {
	 		String name= (String) en.nextElement();
	 		String value= request.getParameter(name);
	 		
	 		names.add(name);
	 	
	 		if(mChoices[0].equals(name)){
	 			out.println(name + ": ");
	 			for(String h: hobby) 
		  			out.print(h + "/ ");
	 		}
	 		else
	  			out.print(name + ": " + value + "<br>");
	 		length++;
		}
	 	
	 	out.println("<hr>");
	 	out.println("<h1>" + "Processing Parameters" + "</h1>");
	 	
	 	for(int i = 0; i < length; i++){

	 		if(mChoices[0].equals(names.get(i))){
	 			out.println(names.get(i) + ": ");
	 			 
	 			for(String h: hobby) 
		  			out.print(hobbyNames[Integer.parseInt(h)] + "/ ");
	 		}
	 		
	 		else if(names.get(i).equals("gender")){
	 			out.print(names.get(i) + ": " + gNames[Integer.parseInt(request.getParameter(names.get(i)))] + "<br>");
	 		}
	 			
	 		else if(names.get(i).equals("phone1")){
	 			out.print(names.get(i) + ": " + telArea[Integer.parseInt(request.getParameter(names.get(i)))] + "<br>");
	 		}
	 		
	 		else
	 			out.println(names.get(i) + ": " + request.getParameter(names.get(i)) + "<br>");
	 	}
	%>
</body>
</html>