from django.conf.urls import url
import pickle
import json

#define a function that deserializes an object


def deserialize(request):
    #get the data from the request
    data = request.body
    #deserialize the data
    obj = pickle.loads(data)
    #return the deserialized object
    return obj