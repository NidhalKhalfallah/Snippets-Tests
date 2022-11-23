var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials from the request
  var userName = req.body.userName;
  var password = req.body.password;
  
  //Check if the username and password are valid or not using SQL query

	con.query("SELECT * FROM users WHERE userName='"+userName+"' AND password='"+password+"'", function (err, result) {
	if (err) throw err;

	//If the credentials are valid then create a session for that user and send it back to client side with status code 200 OK else send error message with status code 401 Unauthorized

	if(result[0]!=null){
	req.session['username'] = result[0].userName;
    res.sendStatus(200);}else{res.sendStatus(401);}});
