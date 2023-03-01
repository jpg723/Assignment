<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%request.setCharacterEncoding("utf-8"); %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h2>EL의 param2</h2>
id: ${param['id']}<br/>
pw: ${param['pw']}<br/>
hobby: ${paramValues.hobby[0]}<br/>
		${paramValues.hobby[1]}<br/>
		${paramValues.hobby[2]}<br/>
		${paramValues.hobby[3]}<br/>
		${paramValues.hobby[4]}<br/>
</body>
</html>