const fastify = require('fastify')({ logger: true })
fastify.get('/URL', async (req, res) => {
    //Verify if URL is a subdomain of Website.com then redirect to URL else redirect to Website.com
    if (req.query.URL.includes("Website.com")) {
        res.redirect(req.query.URL)
    } else {
        res.redirect("Website.com")
    }