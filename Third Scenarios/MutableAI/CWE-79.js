const fastify = require('fastify')({ logger: true })
fastify.get('/test/password', async (req, res) => {
 if (!req.password.password) {
    //send the request parameter
    res.send(req.password)
  } else {
    //send the request parameter with the password removed
    res.send(req.password.password)
  }
})
fastify.listen(3000, (err, address) => {
  if (err) throw err