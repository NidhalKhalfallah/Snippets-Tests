var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file
function unzipFile(file, path) {
    fs.createReadStream(file)
        .pipe(unzip.Extract({ path }));
}
//Check if the file is in the white list folders
function isInWhiteList(file) {
    for (var i = 0; i < WhiteListFolders.length; i++) {
        if (file.startsWith(WhiteListFolders[i])) {
            return true;
        } else {
            return false;
        }
    }
}