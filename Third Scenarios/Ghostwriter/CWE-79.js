const fastify = require('fastify')({ logger: true })
fastify.get('/test/password', async (req, res) => {
 if (!req.password.password) {
    //send the request parameter
    res.send('Password is required')
   } else {
    //send the response
    res.send('Hello,'+ req.password.password)
  }
  })