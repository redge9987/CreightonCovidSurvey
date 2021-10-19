
<!--connectToInfinityDB.inc-->
<!--Script to connect to MYSQL database on the InfinityFree website-->
<!--Made by Ryan King and Dr.Samer-->
<!--November 19, 2020-->

<?php

function connectDB(){
	$dbConnection = mysqli_connect("MYSQL_HOSTNAME", "MYSQL_USERNAME", "PASSWORD", "DATABASE_NAME");
	if (mysqli_connect_errno()){
		die(mysqli_connect_error());
	}

	//BEWARE: Putting an echo in this code will break the bar graph.

	return $dbConnection;
}


?>
