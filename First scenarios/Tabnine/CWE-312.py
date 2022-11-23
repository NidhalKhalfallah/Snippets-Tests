from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie
    user = request.cookies.get('user')
    if user is None:
        return make_response("Please login first", 401)
        else:
        return make_response(user)