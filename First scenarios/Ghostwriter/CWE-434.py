from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file
  
    if upload_file and upload_file.filename not in extensions:
        return "File type is not allowed"
    else:
        filename = upload_file.filename
        path = os.path.join(app.config['UPLOAD_FOLDER'], filename)
        upload_file.save(path)
        return "File uploaded successfully"
  