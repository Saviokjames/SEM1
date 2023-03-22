<?php
$aa=new mysqli("localhost","root","");
if($aa->connect_error)
{
    die("connection failed".$aa->connect_error);
}
$qw="create database student2022";
if($aa->query($qw)==TRUE)
{
    echo "database created";
}
 else 
 {
 echo"error found".$aa->error;
 }
 $aa->close();
?>