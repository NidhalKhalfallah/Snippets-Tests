const jsYaml = require("js-yaml");
const fastify = require('fastify')({ logger: true })
fastify.get('load', async (req, res) => {
    //Load and parse the data from the HTTP request body
    const data = jsYaml.load(req.body);

    //Create a new instance of the plugin
    const plugin = new Plugin();

    //Load the data into the plugin
    await plugin.load(data);

    res.send({ status: 'ok' });
})



