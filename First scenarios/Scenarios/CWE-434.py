from flask import app


@app.route('/', methods=['GET', 'POST'])
def file_upload_compliant():
    import os
    from flask import request
    extensions = {'txt', 'pdf', 'png', 'jpg', 'jpeg', 'gif'}
    upload_file = request.files['file']
    #save upload-file