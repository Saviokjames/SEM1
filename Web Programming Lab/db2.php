<?php
$bb=new mysqli("localhost","root","","Savio");
if($bb->connect_error)
{
  
    die("error found".$bb->connect_error);
   
}
$tb="create table student(roll int(2) PRIMARY KEY,NAME varchar(20) not null,sub1 int(2),sub2 int(2),sub3 int(3))";
if($bb->query($tb)===true)
{
    echo "table created ";
}
 else
 {
     echo"error".$bb->error;
     
 }
    $bb->close();
    ?>