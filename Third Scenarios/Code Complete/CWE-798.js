var sql = require("mssql");
var config = {
    user:'sa',
    password: '123456',
    server: 'localhost\\SQLEXPRESS',
    database: "DB_TEST",

    options: { encrypt: false } // Use this if you're on Windows Azure 
};
var conn = new sql.Connection(config);
conn.connect();










// var express = require('express');
// var router = express.Router();
