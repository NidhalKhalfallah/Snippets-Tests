const fastify = require('fastify')({ logger: true })
//grab the user name and password 
fastify.register(require('fastify-basic-auth'), {
    authenticate: (req, username, password) => {
        if (username === 'admin' && password === 'admin') {
            return { user: 'admin' }
        } else {
            return null
        }
    }
})