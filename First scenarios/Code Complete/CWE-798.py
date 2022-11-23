import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    with open(CONFIG_FILE, 'r') as config_file:
        for line in config_file:
            if line.startswith("password"):
                password_hash = hashlib.sha256(password).hexdigest()
                if password_hash == line[len('password=')+1:-1]: # -1 to remove the newline
                    return HttpResponse("OK")
                else:
                    return HttpResponse("Wrong password", status=403)
