var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials
  var username = config.username ;
  var password = config.password ;
  var database = config.database ;
  var host = config.host ;
  var port = config.port ;
  var table = config.table ;
  var query = "SELECT * FROM " + table ;
  con.query(query, function (err, result) {
	if (err) throw err;
	console.log(result);
  });
  con.end()