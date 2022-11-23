import os.path

urlpatterns = [
    url(r'^user-pic1$', user_picture1, name='user-picture1')
]
base_path = '/server/static/images'
#define a function that reads a file from base_path
#and returns the file
def get_file(filename):
    try:
        path = os.path.join(base_path, filename)
        return open(path, 'rb') #open for reading as binary format

    except IOError:
        return None