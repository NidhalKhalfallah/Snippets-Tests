import Ajv from 'ajv';
let ajv = new Ajv({ allErrors:
app.get('/user/:id', function(req, res) {
	if (!ajv.validate(schema, req.body)) {
		res.end(ajv.errorsText());
		console.log(ajv.compile(schema).errors);
		return;
	}
});
