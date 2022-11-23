var http = require('http');
http.createServer(function (req, res) {
//Store a password in a cookie
res.setHeader
  ('Set-Cookie', 'password=123456; Path=/');
  res.end('Hello World');
}).listen(8080);
console.log('Server running on port 8080');