let connection = {
	hostname: 'www.website.com',
	port: 7700,
	path: '/',
	method: 'GET',
	rejectUnauthorized:false
};
var req = https.request(connection, (res) => {
	console.log('statusCode:', res.statusCode);
	console.log('headers:', res.headers);

	res.on('data', (d) => {
		process.stdout.write(d);
	});

  });

  req.end();

  req.on('error', (e) => {
   console.error(e);
});
