from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file
    if upload_file.filename == '':
        upload_file.save(os.path.join(app.config['UPLOAD_FOLDER'], upload_file.filename))
        return "File uploaded successfully"
        else:
        if upload_file.filename.endswith(tuple(extensions)):
            upload_file.save(os.path.join(app.config['UPLOAD_FOLDER
            ], upload_file.filename))
            return "File uploaded successfully"
            else:
            return "Invalid file type"
            