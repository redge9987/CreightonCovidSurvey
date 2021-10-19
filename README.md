# CreightonCovidSurvey

By Ryan King, Jimmy Phelps, and Dr. Samer Al-Khateeb

Creighton University

November 19, 2020

Description: College project for a PHP/MySQL website.
This website that allows Creighton University students to answer questions about their comfort with the college campus in light of the COVID-19 pandemic. 
Survey answers are saved to a MySQL database table. Table is viewable and modifiable from the admin page. 
Project includes a Login Page, a Survey Page, and an Admin Page. 

Anyone may download, distribute, or modify this project without restriction. 

Instructions to make this website functional:
1. Set up a MySQL Database (I used Infinity Free) with the following table:
	CREATE TABLE surveyresults(
	participantID INT AUTO_INCREMENT,
	cat1 INT,
	cat2 INT,
	cat3 INT,
	cat4 INT,
	cat5 INT,
	PRIMARY KEY(participantID));
2. Open the file 'connectToInfinityDB.inc'
3. Find the line that starts with '$dbConnection' 
4. Modify the line to the following, replacing the uppercase words with your database information. Include the quotation marks:
	$dbConnection = mysqli_connect("MYSQL_HOSTNAME", "MYSQL_USERNAME", "PASSWORD", "DATABASE_NAME");
5. The website is functional if hitting the "Submit" button on the survey page displays a Thank-You message, and if the admin page is displaying a bar graph. 
