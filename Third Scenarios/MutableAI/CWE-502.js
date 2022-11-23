const jsYaml = require("js-yaml");
const fastify = require('fastify')({ logger: true })
fastify.get('load', async (req, res) => {
    //Load and parse the data from the HTTP request body
    const data = await req.body();
    const parsedData = jsYaml.safeLoad(data);
    //Do