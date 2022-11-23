from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie
    response = make_response('Hello World')
    response.set_cookie('user', request.args.get('user'))
    response.set_cookie('password', request.args.get('password'))
    return response
    


