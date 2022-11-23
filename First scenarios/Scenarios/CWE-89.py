from django.conf.urls import url
from django.db import connection


def show_user(request, username):
    with connection.cursor() as cursor:
        # fetch a user from the database