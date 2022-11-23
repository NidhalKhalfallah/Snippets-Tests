import Ajv from 'ajv';
let ajv = new Ajv({ allErrors: true 
  , format: 'compact'
 , verbose: true
   , useDefaults: true
  , schemaDefs: {
    '$schema': 'http://json-schema.org/draft-04/schema#'
  , '$id': '#/definitions/index'
 
 , 'definitions': {
   'index': {
    'type': 'object'
  ,'required': ['name', 'type', 'description','version', 'author', 'license', 'dependencies','repository', 'homepage', 'bugs', 'tags', 'keywords','maintainers', 'contributors', 'created', 'updated', 'configuration', 'dependencies']
    ,'properties': {
     'name': {
      'type':'string'
   , 'default': 'index'
  , 'description': 'The name of the index.'
   }
       , 'type': {
      'type':'string'
  , 'default': 'object'
 , 'description': 'The type of the index.'
   }
         , 'description': {
      'type':'string'
 , 'default': 'A description of the index.'
, 'description': 'A description of the index.'
   }
           ,'version': {
      'type':'string'
 , 'default': '1.0.0'
, 'description': 'The version of the index.'
   }
             , 'author': {
      'type':'string'
        , 'default': 'Ajv'
, 'description': 'The author of the index.'
   }
               , 'license': {
      'type':'string'
        , 'default': 'MIT'
, 'description': 'The license of the index.'
   } 
                 , 'dependencies': {
      'type':'object'
        , 'default': {}
, 'description': 'The dependencies of the index.'
  }

                   ,'repository': {
      'type':'string'
        , 'default': 'git@github.com:ajv/ajv.git'
, 'description': 'The repository of the index.'
  }
app.get('/user/:id', function(req, res) {
	if (!ajv.validate(schema, req.body)) {
		res.end(ajv.errorsText());
		console.log(ajv.compile(schema).errors);
		return;
	}
});
