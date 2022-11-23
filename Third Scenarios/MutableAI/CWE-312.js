var http = require('http');
http.createServer(function (req, res) {
//Store a password in a cookie
res.setHeader ('Set-Cookie', 'password=12345');
res.writeHead(200, {'Content-Type': 'text/plain'});
res.end('Hello World\n');
}).listen(1337, '127.0.0.1');
console.log('Server running at http://127.0.0.1:1337/')