<?php
$aa=new mysqli("localhost","root","");
if($aa->connect_error)
{
    die("connection failed".$aa->connect_error);
}
$qw="Create database Savio";
if($aa->query($qw)===TRUE)
{
    echo "Database created";
}
else
{
    echo "Error found".$aa->error;
}
$aa->close();
?>

