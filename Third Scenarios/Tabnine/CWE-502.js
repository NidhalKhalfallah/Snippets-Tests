const jsYaml = require("js-yaml");
const fastify = require('fastify')({ logger: true })
fastify.get('load', async (req, res) => {
    //Load and parse the Yaml data from the HTTP request
    const data = await fs.readFileSync(path.join(__dirname, 'data', req.params[0]), 'utf8');
    const yaml = jsYaml.safeLoad(data);