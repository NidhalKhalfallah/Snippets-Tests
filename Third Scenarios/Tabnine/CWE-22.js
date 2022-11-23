var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file

function unzipFile(filePath, callback) {
    var zip = new JSZip();
    zip.loadAsync(filePath).then(function (zip) {
        callback(null, zip);
    }).catch(function (err) {
 
        callback(err, null);
    });

    return zip;
    