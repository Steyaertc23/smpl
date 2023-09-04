from .token import Token
from .constants import TT_INT, TT_FLOAT, TT_PLUS, TT_MINUS, TT_MUL, \
                       TT_DIV, TT_LPAREN, TT_RPAREN

class Lexer:
    def __init__(self, text) -> None:
        self.text = text
        self.pos = -1
        self.current_char = None
        self.advance()

    def advance(self) -> None:
        self.pos += 1
        self.current_char = self.text[self.pos] if self.pos < len(self.text) else None
        
    def make_tokens(self):
        while self.current_char != None:
            continue