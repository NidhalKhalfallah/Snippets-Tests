from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie