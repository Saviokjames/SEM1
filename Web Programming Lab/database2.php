<?php
$bb=new mysqli("localhost","root","","student2022");
if($bb->connect_error)
{
die("access denied".$bb->connect_error);}
    $rep="create table student(rollno int(2) PRIMARY KEY,name varchar(20) not null,mark1 int(2) ,mark2 int(2),mark3 int(2),mark4 int(2),tot int(2))";
    if($bb->query($rep)==TRUE)
    {
        echo "table created";
        
    }
 else 
 {
 echo "failed".$bb->error;
 }
 $bb->clone();
 ?>
        