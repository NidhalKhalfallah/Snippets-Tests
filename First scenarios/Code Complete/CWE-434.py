from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file
    #to current directory
    upload_file.save(os.path.join('.', upload_file.filename))

    #check if file extension is in the list of allowed extensions
    if os.path.splitext(upload_file)[1][1:] not in extensions:
        return 'File type not allowed'

    #if all ok, send a response with status code 200 (OK) and some text
    return 'OK', 200
