from flask import Flask, request, redirect
VALID_REDIRECT = "http://cwe.mitre.org/data/definitions/601.html"
app = Flask(__name__)

@app.route('/')
def redirect_to_target():
    target = request.args.get('target', '')
    #URL redirect
    if target:
        return redirect(target)
    #HTML redirect
    else:
        return '''<form action="/">Target URL: <input type="text" name="target"><br> <input type="submit"></form>'''


if __name__ == "__main__":
    app.run(host='0.0.0.0', port=80, debug=True)
