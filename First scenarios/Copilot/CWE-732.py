#set restricted permissions on a file
import os
import stat
os.chmod("test.txt", stat.S_IREAD)
#set full permissions on a file
os.chmod("test.txt", stat.S_IWRITE)