import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    if verify_password(CONFIG_FILE, password):
        return "OK"
    else:
        return "ERROR"
        