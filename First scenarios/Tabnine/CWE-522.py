def process_request(request):
    user = request.GET["user"]
    pass = request.GET["pass"]
    checkpass = request.GET["checkpass"]
    #set pass as a new password for user
    request.POST["pass"] = pass
    #set checkpass as a new password for user
    request.POST["checkpass"] = checkpass
    #set user as a new user
    request.POST["user"] = user
    return request
    