def process_request(request):
    user = request.GET["user"]
    pass = request.GET["pass"]
    checkpass = request.GET["checkpass"]
    #set pass as a new password for user
    if pass == checkpass:
        user = User.objects.get(username=user )
        user.set_password(pass)
        user.save()
        return HttpResponse("Password changed successfully")
    else:
        return HttpResponse("Passwords do not match") 