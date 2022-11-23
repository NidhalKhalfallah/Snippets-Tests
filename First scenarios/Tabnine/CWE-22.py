import os.path

urlpatterns = [
    url(r'^user-pic1$', user_picture1, name='user-picture1')
]
base_path = '/server/static/images'
#define a function that reads a file from base_path

def read_file(path):
    with open(path, 'r') as f:
        return f.read()

