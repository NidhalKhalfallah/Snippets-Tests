const fastify = require('fastify')({ logger: true })
fastify.get('/URL', async (req, res) => {
    //Verify if URL is a subdomain of Website.com then redirect to URL else redirect to Website.com
    const URL = req.query.URL;
    if (URL && URL.includes('Website')) {
        res.redirect(301, 'https://' + URL)
    } else {
        res.redirect(301, 'https://www.' + domain)
    }
