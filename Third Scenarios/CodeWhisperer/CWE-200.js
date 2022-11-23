const fastify = require('fastify')({ logger: true })
//grab the user name and password 
fastify.
  get('/', function (request, reply) {
    reply.send({ hello: 'world' })
  }