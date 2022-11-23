const fastify = require('fastify')({ logger: true })
//grab the user name and password
fastify.config = require(' ./config  ' + config + '.json')

fastify.register(require('fastify-passport'), {
 ...require('./config/passport'),
  session: false
