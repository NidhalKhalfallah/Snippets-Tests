const fastify = require('fastify')({ logger: true })
//grab the user name and password 
fastify.register(require('fastify-basic-auth'), {
  authenticate: (req, username, password) => {
    if (username === 'test' && password === 'test') {
      return true;
    } else {
      return false;
    }

  }, onError: function (request, reply) { // optional callback function to handle errors. This is called when authentication fails. The default behavior is to send the 401 Unauthorized response and end the request. If you want to do something different with an error like logging it or sending a custom response use this callback instead of returning false from `authenticate`. Note that if you override this callback in your plugin then you must call `reply` manually as fastify will not be able to respond automatically for you.

    reply.code(401).send({ message: 'You are not authorized.' })

  }, realm: "My App" // optional realm name for basic auth header
})


// Register routes and start server!
fastify.get('/', async (request, reply) => {

  const user = request['user'] || {} // get user object from fastify-basic-auth middleware - see https://github.com/fastify/fastify-basic-auth#optionsuserobject--callbackfunction--stringrealmname--stringrealmdescription---defaultsundefinedforboththeusernameandpasswordparametersofauthenticatemethod---returnsbooleanfalseifauthenticationfailsoranobjectwithpropertiesusernameandpasswordcontainingtheusernamenamethepasswordparameterofauthenticatemethodifitreturnstrueotherwise---seeabovelinkforfulldetailsonusingtheuserobjectinyourpluginfile  

  console.log("User", user);

  return await reply.view('index', request["user"] ? Object.assign({}, request["user"], {"message": "Hello World"}) : null); // pass data into template engine via view engine's context object - see https://www.npmjs.com/package/fastify#viewenginecontextobject -- note that we're passing in a copy of the original user object so that we can add our own properties without modifying the original one which may be used elsewhere in your app!  
});
