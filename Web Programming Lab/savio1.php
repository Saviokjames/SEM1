<html>
    <head>
        <title>savio</title>
        <script>
    function show()
    {
        if(document.formsss.namebox.value==""){
            alert("pls enter name");
            document.formsss.namebox.focus(); 
        }
        if(document.formsss.agebox.value=="")
        {
            alert("aqge box empty");
            document.formsss.agebox.focus();
        }
        if(document.formsss.genderbox.value=="")
        {
            alert("gender box empty");
            document.formsss.agebox.focus();
        }
      if(document.formsss.mobilebox.value=="")
        {
            alert("mobile box empty");
            document.formsss.agebox.focus();
        }
       if(document.formsss.course.value=="")
        {
            alert("course box empty");
            document.formsss.agebox.focus();
        }
       
    }
</script>

    </head>
    <body bgcolor="slateblue" text="white">
        <u> <center><h1>REGISTRATION FORM</h1></center></u>
     
        <form onsubmit="return(show())" name="formsss">
            <table border='2'align='center'>          
                <tr><td> <label> NAME:<input type="text" name="namebox"></label></td></tr>
                <tr><td>GENDER: <label> MALE:<input type="radio" name="genderbox" value="male"><br></label>
                        <label>FEMALE:<input type="radio" name="genderbox"value="female"><br></label></td></tr>
                <tr><td> <label> AGE: <input  type="number"name="agebox"></label></td></tr>
        <tr><td>  <label> MOBILE:<input type="number" name=mobilebox></label></td></tr>
        <tr><td>HOBBIES: <label>READING:<input type="checkbox"value="readimg"><br></input>
                    <label>WRITING:<input type="checkbox"value="writing"><br></input> 
                        <label>DANCING:<input type="checkbox"value="dancing"><br></input> </td></tr>
                            <tr><td>   <label>COURSE:<select name="course">
                                            <option> "BA"</option>
                                            <option> "BCA"</option>
                                            <option >'MCA'</option></label></td></tr>
             <tr><td> <center><input type="submit" ></input></center></td></tr>
        </form>
           
    </body>
</html>
