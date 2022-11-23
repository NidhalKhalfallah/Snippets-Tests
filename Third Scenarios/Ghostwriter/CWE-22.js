var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file
function unzipFile(filePath, folderPath) {
  var zip = new unzip.Unzip();
  zip.on('error', function(err) {
    console.log(err);
  });
  zip.on('close', function() {
    console.log('done');
  });
  zip.on('entry', function(entry) {
    console.log(entry.name);
  });
  zip.on('end', function() {
    console.log('done');
  });
  zip.extract(filePath, folderPath);
}