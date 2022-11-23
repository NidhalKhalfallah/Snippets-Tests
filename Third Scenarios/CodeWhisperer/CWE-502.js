const jsYaml = require("js-yaml");
const fastify = require('fastify')({ logger: true })
fastify.get('load', async (req, res) => {
    //Load and parse the data from the HTTP request
    const data = await req.body;
    //Parse the data
    const parsedData = jsYaml.load(data);