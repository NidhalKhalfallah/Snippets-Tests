import os.path

urlpatterns = [
    url(r'^user-pic1$', user_picture1, name='user-picture1')
]
base_path = '/server/static/images'
#define a function that reads a file from base_path
def read_file(filename):
    file_path = os.path.join(base_path, filename)
    with open(file_path, 'rb') as f:
        return f.read()