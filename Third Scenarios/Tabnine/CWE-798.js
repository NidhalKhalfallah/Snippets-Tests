var sql = require("mssql");
var config = {
    user: process.env.DB_USER,
  password: process.env.DB_PASSWORD,
 : {
    server: process.env.DB_HOST,
     port: process.env.DB_PORT,