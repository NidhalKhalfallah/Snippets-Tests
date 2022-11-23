import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    with open(CONFIG_FILE, 'r') as f:
        for line in f:
            if line.startswith("password="):
                password_hash = line.split("=")[1].strip()
                break
            else:
                
                password_hash = ""
                
    if password_hash == "":
        return "No password set"
        
    if password_hash == hashlib.sha256(password.encode()).hexdigest():
        return "OK"
        
    return "Wrong password"
    