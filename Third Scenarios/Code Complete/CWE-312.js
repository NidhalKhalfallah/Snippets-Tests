var http = require('http');
http.createServer(function (req, res) {
//Store a password in a cookie
res.setHeader('Set-Cookie', 'password=123456; Max-Age=3600');
res.writeHead(200, {'Content-Type': 'text/plain'});
res.end('Hello World