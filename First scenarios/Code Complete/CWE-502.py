from django.conf.urls import url
import pickle
import json

#define a function that deserializes an object
def deserialize(obj):
	if isinstance(obj, str):
      	  return pickle.loads(obj)
    	elif isinstance(obj, dict):
      	  return {key: deserialize(value) for key, value in obj.items()}
   	 elif isinstance(obj, list):
   	     return [deserialize(item) for item in obj]
   	 else:
    	    raise TypeError('Unknown type')
