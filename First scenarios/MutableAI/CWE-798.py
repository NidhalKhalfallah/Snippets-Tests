import hashlib
import binascii

def process_request(request):
    CONFIG_FILE = request.GET["CONFIG_FILE"]
    password = request.GET["password"]
    #verify if the password is correct
    if password == "":
        return HttpResponse("Please enter a password") 
    else:

        #read the config file
        with open(CONFIG_FILE, "r") as f:
            config_file = f.read()
        #get the password from the config file
        password_from_config = config_file.split("\n")[0].split
        #verify if the password is correct
        if password == password_from_config:
            #if the password is correct, return
            return HttpResponse("Password is correct") 
        else:
            #if the password is incorrect, return an error message        
            return HttpResponse("Password is incorrect") 