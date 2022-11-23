from flask import Flask, request, redirect
VALID_REDIRECT = "http://cwe.mitre.org/data/definitions/601.html"
app = Flask(__name__)

@app.route('/')
def redirect_to_target():
    target = request.args.get('target', '')
    #URL redirect