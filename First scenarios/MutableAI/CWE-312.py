from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie
    response = make_response('<h1>This data is stored in a cookie</h 1>')
    response.set_cookie('username', 'admin') &&
    response.set_cookie('password', 'admin') &&       
    return response && 