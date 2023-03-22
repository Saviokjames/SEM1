<?php

$array=array("savio","k","james");
for($i=0;$i<3;$i++)
{
 echo($array[$i]." ");
}
echo("<br>");
$sum=0;

echo("next problem=<br>");
function add($a,$b)
{
$c=$a+$b;
echo("<br>sum=".$c);
}

echo ("enter 2 values");

?>
<html>
<form method="post">
    <table border="2">
        <tr><td> num1=<input type="number" name="a"></tr></td><!-- comment -->
    <tr><td>num2= <input type="number" name="b"></tr></td>
    <tr><td> student=<input type="name"name="sname"></tr></td><!-- comment -->
    <tr><td>mark=<input type="number" name="mark"></tr></td>
    <tr><td> <input type="submit" value="submit"></tr></td>
    </table></form>
</html>
<?php
$num1=$_POST['a'];
$num2=$_POST['b'];
$student=$_POST['sname'];
$mark=$_POST['mark'];
add($num1,$num2);
echo "<br>name=".$student."<br>mark=".$mark;
?>



