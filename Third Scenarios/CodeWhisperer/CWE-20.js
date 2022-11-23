const fastify = require('fastify')({ logger: true })
fastify.get('/URL', async (req, res) => {
    //Verify if URL is a subdomain of Website.com then redirect to URL else redirect to Website.com
    return res.redirect('https://www.google.com')