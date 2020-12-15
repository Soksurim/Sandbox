<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>

<style>

#loginBox {
	background-color: #fffac7; 
	box-shadow: 0 0 5px #fffac7;
	padding: 5px 10px;
	text-align: center;
	width: 250px;
	height: 150px;
	margin: 20px;
}

no{
	background-color: #fffac7; 
	box-shadow: 0 0 5px #fffac7;
	width : 35%;
	margin: 20px;
	padding: 0.5em;
	line-height: 1em;
	border-radius: 0.5em;
	-moz-border-radius: 0.5em;
	-webkit-border-radius: 0.5em;
	vertical-align: middle;
}

</style>

	<form name="loginForm" method="get" action="../member/Log_in.do">
			
	<div class='rounded' id="loginBox">
		<table align="left" border="0" cellspacing="10">

			<tr>
				<td height="30" width="70" align="middle">아이디</td>
					<td width="100">
						<!-- type = "타입" name = "변수명" placeholder = "텍스트필드내 출력문" --> <input
						type="text" name="id" id="id" placeholder="아이디 입력" size="15">
						<div id="idDiv" align = "left"
							style="color: #004620; font-size: 15pt; font-weight: bold; "></div>
					</td>
				</tr>

			<tr>
				<td height="30" width="70" align="center">비밀번호</td>

				<td><input type="text" id="pwd" name="pwd"
								placeholder="비밀번호 입력" size="15" onKeypress="javascript:if(event.keyCode==13) {loginCheck()}"/>
					<div id="pwdDiv" align = "left"
									style="color: #004620; font-size: 15pt;font-weight: bold;"></div>
				</td>
			</tr>

			<tr>
				<td colspan="2" height="40" align="center">
				<input type="button" value="login" onclick="javascript:loginCheck()"> 
					<input type="button" value="register"
								onclick="location.href='writeForm.do'"> 
					<!-- 주소는 현재 파일 기준으로, 같은폴더내에서는 바로 파일명, 다른 폴더일시 .. 으로 돌아간 후 가려는 폴더로 들어간다. -->
				</td>
			</tr>
		</table>
		</div>
	</form>
	
	<script type="text/javascript">
		function loginCheck() {

			var idDiv = document.getElementById("idDiv");
			var pwdDiv = document.getElementById("pwdDiv");

			if (document.getElementById("id").value == "") {
				idDiv.innerText = "아이디를 입력하세요";
				return;
			}
			

			if (document.getElementById("pwd").value == "") {
				pwdDiv.innerText = "비밀번호를 입력하세요";
				return;
			}
			
			var id = document.getElementById("id").value;
			var pwd = document.getElementById("pwd").value;

			/* location.href="../member/Log_in.do?id="+id+"&pwd="+pwd; */
			
			 document.loginForm.submit(); 

		}
	</script>
