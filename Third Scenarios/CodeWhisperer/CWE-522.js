var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials
  var username = config.username;
  var password = config.password;