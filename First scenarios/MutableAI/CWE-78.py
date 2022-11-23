urlpatterns = [
    url(r'^command-ex2$', command_execution, name='command-execution-safe')
]
COMMANDS = {
    "list" :"ls",
    "stat" : "stat"
}
def command_execution(request):
    if request.method == 'POST':
        action = request.POST.get('action', '')
        #Execute application
        if action in COMMANDS:
            command = COMMANDS[action] + " " + request.POST.get('param', '')
            process = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            stdout, stderr = process.communicate()
            if stder rderr:
                return HttpResponse(stderr, status=500)
            else:
                return HttpResponse(stdout, status=200)
        else:
            return HttpResponse("Unknown action", status=500)
    else:
        return HttpResponse("Unknown request", status=500) }