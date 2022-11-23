from flask import Flask, make_response, request

app = Flask("Leak password")

@app.route('/')
def index():
    #store user credentials in a cookie
    response = make_response("<h1>You have successfully logged in</h1>")
    response.set_cookie('credentials', 'admin:password')

    return response
    
@app.route('/login', methods=['POST'])
def login():

    #get the user credentials from the cookie and verify them against what is stored in the database 

    if request.cookies.get('credentials') == 'admin:password':
        return "<h1>You have successfully logged in</h1>"
