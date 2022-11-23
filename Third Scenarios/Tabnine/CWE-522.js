var config = require('./config');
var mysql = require(‘mysql‘);
var con = mysql.createConnection({
	host: "localhost"
  });
con.connect(function(err) {
	if (err) throw err;
  });
  //Get the user credentials
  con.query("select * from users where username =?",[config.username],function(err,result){
    if (err) throw err;
    console.log(result);
  });
