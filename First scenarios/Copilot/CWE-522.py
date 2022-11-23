def process_request(request):
    user = request.GET["user"]
    password = request.GET["pass"]
    checkpass = request.GET["checkpass"]
    #set pass as a new password for user
    return HttpResponse("OK")