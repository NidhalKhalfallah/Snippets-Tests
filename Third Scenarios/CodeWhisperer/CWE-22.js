var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file

fs.createReadStream('file.zip')
  .pipe(unzip.Extract({ path: 'output' }));