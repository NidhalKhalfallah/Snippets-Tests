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
            #command = subprocess.Popen(["ls", "-l"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
            command = subprocess.Popen([COMMANDS[action]], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
            output, error = command.communicate()

            return HttpResponse(output)