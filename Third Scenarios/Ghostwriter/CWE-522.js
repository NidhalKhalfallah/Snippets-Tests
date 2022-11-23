var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials
  con.query("SELECT * FROM users WHERE username = '" + config.username + "'", function(err, rows) {
    if (err) throw err;
    console.log(rows);
    con.end();
  });