const jsYaml = require("js-yaml");
const fastify = require('fastify')({ logger: true })
fastify.get('load', async (req, res) => {
    //Load and parse the data from the HTTP request
            const data = jsYaml.safeLoad(req.body);
  
    //Send the data to the HTTP response
    res.json(data);
});