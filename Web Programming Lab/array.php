<?php
$marks=array("savio"=>array("physics"=>80,"maths"=>90,"chemistry"=>70),"ram"=>array("physics"=>70,"maths"=>80,"chemistry"=>80),"sam"=>array("physics"=>90,"maths"=>70,"chemistry"=>70));
echo"<table border=2><tr><th colspan=4>INTERNAL MARKS</th></tr><tr><td>NAME</td><td>PHYSICS</td><td>MATHS</td><td>CHEMISTRY</td></tr>";
foreach ($marks as $name=>$mark)
{
    echo"<tr><td>".$name."</td>";
    
}
foreach ($marks as $num=>$value)
{
    echo"<td>".$value."</td>";
    
}
echo"</tr>";
echo"</table>";
?>