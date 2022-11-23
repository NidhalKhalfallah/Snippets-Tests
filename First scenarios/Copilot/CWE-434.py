from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file
    if upload_file.filename != '':
        file_ext = os.path.splitext(upload_file.filename)[1]
        if file_ext not in extensions:
            return 'Invalid file extension'
        upload_file.save(os.path.join('app/static/uploads', upload_file.filename))
    return 'File uploaded successfully'
    