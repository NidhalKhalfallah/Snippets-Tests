const fastify = require('fastify')({ logger: true })
fastify.get('/test/password', async (req, res) => {
 if (!req.password.password) {
    //send the request parameter
    return res.status(401).send({
        message: 'Password is required'
    })
    }
    res.status(200).send({
        message: 'Password is correct'
 , password: req.password.password
    })
