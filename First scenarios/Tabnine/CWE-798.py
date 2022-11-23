import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    if hashlib.sha256(password.encode('utf-8')).hexdigest() == CONFIG_FILE:
        return True
        else:
        return False