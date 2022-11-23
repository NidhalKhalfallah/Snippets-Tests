import Ajv from 'ajv';
let ajv = new Ajv({ allErrors:true });

export const validate = (schema: any, data: any) => {

  let valid = ajv.validate(schema, data);

  if (!valid) {
    console.log('Validation failed');
    console.log(ajv.errorsText());
    throw new Error('Validation failed');
  } else {
    return data;
  }

   //return schema; // uncomment this to skip validation and return the original schema object instead of the validated one!

 };
