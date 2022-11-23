import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    if hashlib.sha256(password.encode()).hexdigest() == CONFIG_FILE:
        return "CONFIG_FILE: " + CONFIG_FILE + " PASSWORD: " + password
    else:
        return "CONFIG_FILE: " + CONFIG_FILE + " PASSWORD: " + password + " ERROR"