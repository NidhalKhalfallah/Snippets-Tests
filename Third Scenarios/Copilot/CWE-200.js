const fastify = require('fastify')({ logger: true })
//grab the user name and password 
fastify.get('/user/:name/:password', (request, reply) => {
	console.log(request.params.name);
	console.log(request.params.password);
	reply.send({ hello: 'world' })
})