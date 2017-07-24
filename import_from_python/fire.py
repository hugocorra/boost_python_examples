from hello_ext import *

class Fire_Spirit(Card):
    def __init__(self, name="Fire Spirit", text="A thing"):
        self.name = name
        self.text = text
        super(Fire_Spirit, self).__init__(name, text)
