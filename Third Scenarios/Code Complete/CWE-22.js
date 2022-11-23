var WhiteListFolders = ["/home/user/Documents","/home/user/Images","/home/user/Music"];
const fs = require('fs');
const unzip = require('unzip');
//Unzip a file
function unzipFile(path,file){
    fs.createReadStream(path+"/"+file).pipe(unzip.Extract({ path: path }));
}
//Zip a file and delete it after zipping (not used)
function zipFile(path,file){
    var output = fs.createWriteStream(path+"/"+file);

    // compress the file with gzip 
    var archive = archiver('zip', {});

    // listen for all archive data to be written 
    // 'close' event is fired only when a file descriptor is involved 

     archive.on('close', function() { console.log("archive wrote " + archive.pointer() + ' bytes'); });

     // pipe archive data to the file 

     archive.pipe(output);

     // append files from a sub-directory, putting its contents at the root of archive 

     archive.directory('/home/user/Documents', false);  

     // finalize the archiving process 

     output.on('close', function() { console.log("archiver has been finalized and the output file descriptor has closed."); });     	archive .finalize();		}
