#set restricted permissions on a file

import os

#set file permissions

os.chmod('test.txt', 0o444)