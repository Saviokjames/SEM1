<?php
$ac=new mysqli("localhost","root","","Savio");
if($ac->connect_error)
{
      die("Connection Failed".$ac->connect_error);
}
$q="insert into student(roll,NAME,sub1,sub2,sub3) values(25,'heisenberg',28,25,30)";
if($ac->query($q)===TRUE)
{
    echo "values inserted successfully";
}
else
{
    echo "Error found".$ac->error;
}
$ac->close();
?>
