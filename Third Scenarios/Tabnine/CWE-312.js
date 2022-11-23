var http = require('http');
http.createServer(function (req, res) {
//Store a password in a cookie
res.setHeader ('Content-Type', 'application/ cookie');

var cookie = req.headers.cookie;

if (cookie) {
    var parts = cookie.split ('=');
    if (parts.length == 2) {
        var key = parts[0];
        var value = parts[1];
        if (key == 'password') {
            res.setHeader ('Set-Cookie', 'password=' + value);
            res.end ();

