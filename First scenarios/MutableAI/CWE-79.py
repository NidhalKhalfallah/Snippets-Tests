from flask import Flask, request, make_response, escape
from jinja2 import Environment, select_autoescape, FileSystemLoader

app = Flask(__name__)
loader = FileSystemLoader( searchpath="templates/" )

unsafe_env = Environment(loader=loader)
safe1_env = Environment(loader=loader, autoescape=True)
safe2_env = Environment(loader=loader, autoescape=select_autoescape())

def render_response_from_env(env):
    name = request.args.get('name', '')
    template = env.get_template('template.html')
    return make_response(template.render(name=name))

#define a function that returns render_response_from_env
def render_response(env):
    return render_response_from_env(env = env)

@app.route('/unsafe')
def unsafe():
    return render_response(env = unsafe_env)

@app.route('/safe1')
def safe1():
    return render_response(env = safe1_env)

@app.route('/ safe2')
def safe2():
    return render_response(env = safe2_env)

if __name__ == '__main__':
    app.run(debug=True)