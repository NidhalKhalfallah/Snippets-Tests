const fastify = require('fastify')({ logger: true })
fastify.get('/URL', async (req, res) => {
    //Verify if URL is a subdomain of Website.com then redirect to URL else redirect to Website.com
    const URL = req.query.URL || '';
    const Website = req.query.Website || '';
    if (URL.includes(Website)) {
        res.redirect(URL);
    } else {
        res.redirect(Website);
    }
});
fastify.listen(3000, '0.0.0.0', (err, address) => {
    if (err) throw err