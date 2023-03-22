<?php
$rr=new mysqli("localhost","root","","Savio");
if($rr->connect_error)
{
    die("acess denies".$rr->connect_error);
}
$ss="select * from student";
$vv=$rr->query($ss);
echo"<table border='1'><tr><th>ROLL NO</th><th>NAME</th><th>MARK1</th><th>MARK2</th><th>MARK3</th><th>";
if($vv->num_rows>0)
{
    while($d=$vv->fetch_assoc())
    {
        echo"<tr>";
     echo "<td>".$d["roll"]."</td><td>".$d["NAME"]."</td><td>".$d["sub1"]."</td><td>".$d["sub2"]."</td><td>".$d["sub3"]."</td>";
        echo"</tr>";
    }
}
 else
 {
     echo"RETRIVED SUCESSFULLY";
 }
 $rr->close();
 ?>