const fastify = require('fastify')({ logger: true })
fastify.get('/test/password', async (req, res) => {
 if (!req.password.password) {
    //send the request parameters
    return { password: req.password }
  } else {
    //send the request parameters and the hashed password
    return { password: req.password, hash: await bcrypt.hash(req.password.password, 10) }
  }

  res.code(200).send()
})
