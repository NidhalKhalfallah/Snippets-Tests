var http = require('http');
http.createServer(function (req, res) {
//Store a password in a cookie
res.setHeader('Set-Cookie', 'name=John Doe');
res.end('Hello World!');