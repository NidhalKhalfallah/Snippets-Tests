from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file
    if upload_file.filename == '':
        return 'No selected file'
    if upload_file and allowed_file(upload_file.filename, extensions):
        filename = secure_filename(upload_file.filename)
        upload_file.save(os.path.join(app. config['UPLOAD_FOLDER'], filename))
        return 'File uploaded successfully ' + filename + '<br>' + '<a href="/">Upload another file</ a>'
    else:
        return 'File extension not allowed' + '<br>' + '<a href="/">Upload another file</ a>' 