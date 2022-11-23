from django.conf.urls import url
from django.db import connection


def show_user(request, username):
    with connection.cursor() as cursor:
        # fetch a user from the database
	cursor.execute("SELECT * FROM auth_user WHERE username = %s", [username])
        user = dictfetchall(cursor)

    	return render(request, 'show_user.html', {'user': user})


def show_users(request):
    with connection.cursor() as cursor:
        # fetch all users from the database
        cursor.execute("SELECT * FROM auth_user")
        users = dictfetchall(cursor)

    return render(request, 'show_users.html', {'users': users})
