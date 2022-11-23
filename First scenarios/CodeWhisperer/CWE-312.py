from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie
    resp = make_response("Hello World")
    resp.set_cookie("username", "admin")
    resp.set_cookie("password", "admin")
    return resp