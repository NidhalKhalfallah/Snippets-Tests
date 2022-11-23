import Ajv from 'ajv';
let ajv = new Ajv({ allErrors: true });

export default class SchemaValidator {
  constructor(schema) {
    this.schema = schema;
  }

  validate(data) {
    let valid = ajv.validate(this.schema, data);
    if (!valid) {
      throw new Error(ajv.errorsText());
    }
  }
}
app.get('/user/:id', function(req, res) {
	if (!ajv.validate(schema, req.body)) {
		res.end(ajv.errorsText());
		console.log(ajv.compile(schema).errors);
		return;
	}
});
