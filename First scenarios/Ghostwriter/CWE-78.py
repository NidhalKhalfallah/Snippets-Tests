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
        #Execute application command
        if action in COMMANDS:
            command = request.POST.get('command', '')
          
            #Execute command
            if command:
                return HttpResponse(command_execution(request, action, command))
            else:
                return HttpResponse("Command not found")
        else:
            return HttpResponse("Command not found")