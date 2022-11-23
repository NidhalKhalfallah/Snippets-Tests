var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials
  var sql = "SELECT * FROM user WHERE username = " + config.username + " AND password = " + config.password;
  con.query (sql, function (err, result) {
	if (err) throw err;
	console.log(result);
	  });
