#set restricted permissions on a file
os.chmod(self.file_path, stat.S_IRWXU)
	def tearDown(self):
		#remove the file and directory from the system after testing is complete
		shutil.rmtree(self.dir_path)


class TestFilePermissions(unittest.TestCase):

    def setUp(self):
        #create a new directory for each test case to be placed in 
        self.dir_path = tempfile._get_default_tempdir() + '/' + str(uuid4())[:8] 

    def testGetPermissionStringFromOctalNumberReturnsCorrectStringForValidInputs (self):    
        self.assertEqual('---rwx', getPermissionStringFromOctalNumber('600'))        
        self.assertEqual('--x--wx', getPermissionStringFromOctalNumber('700'))        

    def testGetPermissionStringFromOctalNumberRaisesExceptionForInvalidInputs (self):    
        with self.assertRaisesRegexp (ValueError, 'invalid octal permission number'):             getPermissionStringFromOctalNumber ('123')        

    @patch ('os')       #mock out os module so that we can mock out chmod function calls          class MockOsModule:             def __init__ (self, *args, **kwargs):                 pass             def chmod (*args, **kwargs):                 pass             os = MockOsModule ()              #set restricted permissions on a file in python          os . chmod = MagicMock ()           setRestrictedFileAccessModeOnAFileInPython ('/tmp/test-file')           assert os . chmod . calledOnceWithExactly ('/tmp/test-file', 0o600)      @patch ('sys')      class MockSysModule:          def __init__ (self, *args, **kwargs):              pass          sys = MockSysModule ()       #set restricted permissions on a file in python       sys . argv [1] = '/tmp/test-file'       main ()           assert sys . exit . calledOnceWithExactly (0)   @patch ('sys')   class MockSysModule:       def __init__ (self, *args, **kwargs):           pass       sys = MockSysModule
