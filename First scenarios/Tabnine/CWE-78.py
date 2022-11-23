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
            command = COMMANDS[action]
            command(request)
            else:
            return HttpResponse(json.dumps({
                'status': 'error',
                'message': 'Invalid action'
                }), content_type='application/json')
                