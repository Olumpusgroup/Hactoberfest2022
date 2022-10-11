from flask import Flask, render_template, request
import pickle
from flask_material import Material
import pandas as pd

app = Flask(__name__)
Material(app)

loaded_model = pickle.load(open("Gold.pkl", "rb"))


@app.route("/")
def hello_world():
    return render_template("index.html")


@app.route('/predict', methods=['POST', 'GET'])
def predict():
    text1 = request.form['1']
    text2 = request.form['2']
    text3 = request.form['3']
    text4 = request.form['4']
    print(text1, text2, text3, text4)
    row_df = pd.DataFrame([pd.Series([text1, text2, text3, text4])])
    pricePrediction = loaded_model.predict(row_df)
    output = float(pricePrediction)
    return render_template('result.html', pred='The Predicted Gold Price is ${:.2f}'.format(output))


if __name__ == "__main__":
    app.run(debug=True)
