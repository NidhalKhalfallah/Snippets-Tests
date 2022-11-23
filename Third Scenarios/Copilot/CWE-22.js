var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file
function unzipFile(zipFile, destination) {
    fs.createReadStream(zipFile).pipe(unzip.Extract({ path: destination }));
}