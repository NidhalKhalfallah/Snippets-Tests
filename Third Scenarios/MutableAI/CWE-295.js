let connection = {
	hostname: 'www.website.com',
	port: 7700,
	path: '/',
	method: 'GET',
	rejectUnauthorized: false,
	headers: {
		'Content-Type': 'application/json',
		'Content-Length': Buffer.byteLength(JSON.stringify(data = {
			'username': 'username',
			'password': 'password',
			'action': 'login',
			'appid': 'appid',
			'appver': 'appver',
			'appsecret': 'appsecret',
			'apptoken': 'apptoken',
			'apptype': 'apptype',
  };